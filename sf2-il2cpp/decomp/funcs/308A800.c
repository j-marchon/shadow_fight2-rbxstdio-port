// LabelButton$$set_ButtonColor @ RVA 0x308A800

/* WARNING: Type propagation algorithm not settling */

void LabelButton__set_ButtonColor(LabelButton_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB;
  
  if ((DAT_0456604c & 1) == 0) {
    FUN_01bab630(&LabelButton_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    DAT_0456604c = 1;
  }
  IEPECMCLKJB = (Nekki_SF2_GUI_ResolutionImage_o *)
                (__this->fields).super.super.super.super.m_TargetGraphic;
  if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (IEPECMCLKJB != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    bVar1 = (((Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)->_2).naturalAligment;
    if (bVar1 <= (IEPECMCLKJB->klass->_2).naturalAligment) {
      if ((IEPECMCLKJB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo) {
        IEPECMCLKJB = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
      }
      goto LAB_0318a8a4;
    }
  }
  IEPECMCLKJB = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
LAB_0318a8a4:
  LabelButton__PGCFNOLMNDA(CJNHFNHJHPE,IEPECMCLKJB,method);
  return;
}

