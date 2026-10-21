// LabelButton$$PGCFNOLMNDA @ RVA 0x3089718

void LabelButton__PGCFNOLMNDA
               (int32_t EFJKPCADGJH,Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB,MethodInfo *method)

{
  undefined4 uVar1;
  bool bVar2;
  System_String_array *pSVar3;
  
  if ((DAT_04566054 & 1) == 0) {
    FUN_01bab630(&LabelButton_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_14092);
    DAT_04566054 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)IEPECMCLKJB,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if (IEPECMCLKJB != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      uVar1 = StringLiteral_14092._4_4_;
      (IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14092
      ;
      (IEPECMCLKJB->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
      thunk_FUN_01c20e04(&(IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier);
      if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = LabelButton_TypeInfo->static_fields->JMKEDHMEOAJ;
      if (pSVar3 != (System_String_array *)0x0) {
        if ((uint)EFJKPCADGJH < (uint)pSVar3->max_length) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (IEPECMCLKJB,pSVar3->m_Items[EFJKPCADGJH],(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

