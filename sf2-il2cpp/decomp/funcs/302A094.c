// Nekki.SF2.GUI.SimpleScroll$$GetItemSize @ RVA 0x302A094

UnityEngine_Vector2_o
Nekki_SF2_GUI_SimpleScroll__GetItemSize(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  float fVar2;
  float fVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Rect_o UVar5;
  
  if ((DAT_04565cd7 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    DAT_04565cd7 = 1;
  }
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    (*(System_Collections_Generic_List_T__o **)&(__this->fields)._snapEase,
                     Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
  if (bVar1) {
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    fVar2 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
    fVar3 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
  }
  else {
    __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
    if (((__this_00 == (System_Collections_Generic_List_object__o *)0x0) ||
        (__this_01 = (Nekki_SF2_GUI_BaseScrollItem_o *)
                     System_Collections_Generic_List<object>__get_Item
                               (__this_00,0,
                                Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__),
        __this_01 == (Nekki_SF2_GUI_BaseScrollItem_o *)0x0)) ||
       (__this_02 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(__this_01,(MethodInfo *)0x0),
       __this_02 == (UnityEngine_RectTransform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar5 = UnityEngine_RectTransform__get_rect(__this_02,(MethodInfo *)0x0);
    fVar3 = UVar5.fields.m_Height;
    fVar2 = UVar5.fields.m_Width;
  }
  UVar4.fields.y = fVar3;
  UVar4.fields.x = fVar2;
  return (UnityEngine_Vector2_o)UVar4.fields;
}

