// Nekki.SF2.GUI.SimpleScroll$$ScrollToItem @ RVA 0x302A8D4

void Nekki_SF2_GUI_SimpleScroll__ScrollToItem
               (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t OGPGLGPMEPD,float PNEIGGOFIOA,
               int32_t GAJONDLDKLI,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  System_Collections_Generic_List_object__o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)(ulong)(uint)OGPGLGPMEPD;
  if ((DAT_04565cc4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    DAT_04565cc4 = 1;
    method_00 = extraout_x1;
  }
  if ((*(char *)&(__this->fields).LNAPCDLIOOE == '\0') &&
     (bVar4 = Nekki_SF2_GUI_SimpleScroll__CanInvokeScrolling(__this,method_00), bVar4)) {
    Nekki_SF2_GUI_SimpleScroll__ICHICAKKILG(__this,method_01);
    __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
    if (OGPGLGPMEPD < 0) {
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
LAB_0312aa18:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar1 = (__this_00->fields)._size;
      if (DAT_04561c43 == '\0') {
        FUN_01bab630(&System_Math_TypeInfo);
        DAT_04561c43 = '\x01';
      }
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0312aa18;
      iVar3 = (__this_00->fields)._size;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = OGPGLGPMEPD / iVar1;
      }
      iVar1 = -iVar2;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      OGPGLGPMEPD = iVar3 + OGPGLGPMEPD + iVar3 * iVar1;
    }
    else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0312aa18;
    iVar1 = (__this_00->fields)._size;
    if (iVar1 <= OGPGLGPMEPD) {
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = OGPGLGPMEPD / iVar1;
      }
      OGPGLGPMEPD = OGPGLGPMEPD - iVar3 * iVar1;
    }
    if ((-1 < OGPGLGPMEPD) && (OGPGLGPMEPD < iVar1)) {
      IKKAMAMLIKA = (Nekki_SF2_GUI_BaseScrollItem_o *)
                    System_Collections_Generic_List<object>__get_Item
                              (__this_00,OGPGLGPMEPD,
                               Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
      Nekki_SF2_GUI_SimpleScroll__ScrollToItem(__this,IKKAMAMLIKA,PNEIGGOFIOA,GAJONDLDKLI,method);
      return;
    }
  }
  return;
}

