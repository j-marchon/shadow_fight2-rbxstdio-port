// Util$$DDGOAPOKLHP @ RVA 0x320A098

bool Util__DDGOAPOKLHP(UnityEngine_Vector2_o OOKEGEFHJJN,UnityEngine_Vector2_o GONFCLMJCFJ,
                      MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = OOKEGEFHJJN.fields.y;
  fVar1 = OOKEGEFHJJN.fields.x;
  fVar4 = GONFCLMJCFJ.fields.y;
  fVar3 = GONFCLMJCFJ.fields.x;
  if ((fVar3 < fVar1) || (fVar2 < fVar3)) {
    if ((fVar4 < fVar1) || (fVar2 < fVar4 && fVar1 < fVar3)) {
      return fVar3 <= fVar2 && fVar2 <= fVar4;
    }
  }
  return true;
}

