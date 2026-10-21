// Nekki.SF2.Core.Fights.Renders.Model.NodeRenderer$$MIFGEEIAPBG @ RVA 0x317DA7C

void Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer__MIFGEEIAPBG
               (Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *__this,MethodInfo *method)

{
  int iVar1;
  IEFEBEDLHNN_o *pIVar2;
  int index;
  UnityEngine_LineRenderer_o *__this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o position;
  float local_28;
  float fStack_24;
  
  if (0 < (__this->fields).DBGJIDKBHAG + 1) {
    index = 0;
    fVar3 = 20.0;
    do {
      pIVar2 = (__this->fields).HJKLIDCAEOE;
      if (pIVar2 == (IEFEBEDLHNN_o *)0x0) {
LAB_0327db6c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      fVar4 = (__this->fields).MJLHADBMJEB;
      fVar5 = (__this->fields).PAHEPJHJGON;
      UVar6 = CNDPAJOLKFN__ALBJPLAPOBO((pIVar2->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
      __this_00 = (__this->fields).ICLKKKJNGGO;
      if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_0327db6c;
      sincosf(fVar3 * 0.017453292,&fStack_24,&local_28);
      position.fields.y = local_28 * fVar5 + UVar6.fields.y;
      position.fields.x = fStack_24 * fVar4 + UVar6.fields.x;
      position.fields.z = UVar6.fields.z + -1.0;
      UnityEngine_LineRenderer__SetPosition(__this_00,index,position,(MethodInfo *)0x0);
      iVar1 = (__this->fields).DBGJIDKBHAG;
      index = index + 1;
      fVar3 = fVar3 + 360.0 / (float)iVar1;
    } while (index < iVar1 + 1);
  }
  return;
}

