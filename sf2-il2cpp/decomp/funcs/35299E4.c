// Nekki.SF2.GUI.Fight.PointsTable$$Init @ RVA 0x35299E4

void Nekki_SF2_GUI_Fight_PointsTable__Init
               (Nekki_SF2_GUI_Fight_PointsTable_o *__this,int32_t ACCIHBHMFPN,int32_t FLHLGFGJDMH,
               int32_t NJBICBHLOMO,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  int32_t local_24;
  
  local_24 = FLHLGFGJDMH;
  if ((DAT_04568a13 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1492,ACCIHBHMFPN,FLHLGFGJDMH,NJBICBHLOMO);
    FUN_01bab630(&StringLiteral_2086);
    DAT_04568a13 = 1;
  }
  (__this->fields)._GMPAEDFIIHF_k__BackingField = ACCIHBHMFPN;
  iVar1 = (int)__this;
  if (ACCIHBHMFPN == 1) {
    pNVar3 = (__this->fields).leftScoreText;
    pSVar2 = System_Int32__ToString(iVar1 + 0x20,(MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
      pNVar3 = (__this->fields).rightScoreText;
      pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                  (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
        pNVar3 = (__this->fields).delimiterText;
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                    (pNVar3,StringLiteral_1492,(pNVar3->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
  else {
    if (ACCIHBHMFPN != 0) {
      return;
    }
    pNVar3 = (__this->fields).leftScoreText;
    pSVar2 = System_Int32__ToString(iVar1 + 0x20,(MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
      pNVar3 = (__this->fields).rightScoreText;
      pSVar2 = System_Int32__ToString(iVar1 + 0x24,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                  (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
        pNVar3 = (__this->fields).delimiterText;
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03629abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                    (pNVar3,StringLiteral_2086,(pNVar3->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

