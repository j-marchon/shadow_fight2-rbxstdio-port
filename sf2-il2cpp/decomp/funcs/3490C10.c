// Nekki.SF2.GUI.UIModule$$Awake @ RVA 0x3490C10

void Nekki_SF2_GUI_UIModule__Awake(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_UIModule__o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_UIModule_array *pNVar3;
  
  if ((DAT_04568416 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_Add__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568416 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  lVar2 = Method_System_Collections_Generic_List<UIModule>_Add__;
  __this_00 = Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->_Modules;
  if (__this_00 != (System_Collections_Generic_List_UIModule__o *)0x0) {
    pNVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pNVar3 != (Nekki_SF2_GUI_UIModule_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pNVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pNVar3->m_Items[(int)uVar1] = __this;
        thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,__this);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

