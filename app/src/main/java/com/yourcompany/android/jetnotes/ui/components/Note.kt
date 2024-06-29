package com.yourcompany.android.jetnotes.ui.components

import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.heightIn
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Checkbox
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.shadow
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.yourcompany.android.jetnotes.domain.model.NoteModel
import com.yourcompany.android.jetnotes.util.fromHex

@Composable
fun Note(
  note: NoteModel,
  onNoteClick: (NoteModel) -> Unit = {},
  onNoteCheckedChange: (NoteModel) -> Unit = {},
) {
  val backgroundShape = RoundedCornerShape(4.dp)
  Row(
    modifier = Modifier
      .padding(8.dp)
      .shadow(1.dp, backgroundShape)
      .fillMaxWidth()
      .heightIn(min = 64.dp)
      .background(color = Color.White, shape = backgroundShape)
      .clickable(onClick = { onNoteClick(note) })
  ) {
    NoteColor(
      modifier = Modifier
        .align(Alignment.CenterVertically)
        .padding(start = 16.dp, end = 16.dp),
      color = Color.fromHex(note.color.hex),
      size = 40.dp,
      border = 1.dp
    )
    Column(
      modifier = Modifier
        .weight(1f)
        .align(Alignment.CenterVertically)
    ) {
      Text(
        text = note.title,
        color = Color.Black,
        maxLines = 1,
        style = TextStyle(
          fontWeight = FontWeight.Normal,
          fontSize = 16.sp,
          letterSpacing = 0.15.sp
        )
      )
      Text(
        text = note.content,
        color = Color.Black.copy(alpha = 0.75f),
        maxLines = 1,
        style = TextStyle(
          fontWeight = FontWeight.Normal,
          fontSize = 14.sp,
          letterSpacing = 0.25.sp
        )
      )
    }
    if (note.isCheckedOff != null) {
      Checkbox(
        checked = note.isCheckedOff,
        onCheckedChange = { isChecked ->
          val newNote = note.copy(isCheckedOff = isChecked)
          onNoteCheckedChange(newNote)
        },
        modifier = Modifier
          .padding(start = 8.dp)
          .align(Alignment.CenterVertically)
      )
    }
  }
}

@Preview
@Composable
private fun NotePreview() {
  Note(note = NoteModel(1, "Note 1", "Content 1", null))
}
