// Nekki.SF2.GUI.SimpleScroll$$RemoveItem @ RVA 0x302D2F4

void Nekki_SF2_GUI_SimpleScroll__RemoveItem
               (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               UnityEngine_Transform_o *IFFKONPAKOP,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  if ((DAT_04565cca & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Remove__);
    DAT_04565cca = 1;
  }
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
  bVar1 = false;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Remove
                      (__this_00,(Il2CppObject *)IKKAMAMLIKA,
                       Method_System_Collections_Generic_List<BaseScrollItem>_Remove__);
    if ((IKKAMAMLIKA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)IKKAMAMLIKA,(MethodInfo *)0x0),
       bVar1 = false, __this_01 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(__this_01,IFFKONPAKOP,false,(MethodInfo *)0x0);
      *(undefined1 *)((long)&(__this->fields).NMIHOKCDLMP + 2) = 1;
      *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(bVar1);
}

