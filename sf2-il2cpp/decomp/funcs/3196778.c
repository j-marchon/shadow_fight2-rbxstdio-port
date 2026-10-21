// Nekki.SF2.Core.Fights.Controls.ActionButtons$$GetButtons @ RVA 0x3196778

System_Collections_Generic_List_ProgressButton__o *
Nekki_SF2_Core_Fights_Controls_ActionButtons__GetButtons
          (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_ProgressButton__o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ProgressButton_o *pNVar3;
  Nekki_SF2_GUI_ProgressButton_array *pNVar4;
  
  if ((DAT_04566a79 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ProgressButton>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ProgressButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ProgressButton>_TypeInfo);
    DAT_04566a79 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ProgressButton__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ProgressButton>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ProgressButton>__ctor__);
  lVar2 = Method_System_Collections_Generic_List<ProgressButton>_Add__;
  if (__this_00 != (System_Collections_Generic_List_ProgressButton__o *)0x0) {
    pNVar3 = (__this->fields)._btnKick;
    pNVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pNVar4 != (Nekki_SF2_GUI_ProgressButton_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pNVar4->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pNVar4->m_Items[(int)uVar1] = pNVar3;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pNVar3,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      lVar2 = Method_System_Collections_Generic_List<ProgressButton>_Add__;
      pNVar3 = (__this->fields)._btnPunch;
      pNVar4 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pNVar4 != (Nekki_SF2_GUI_ProgressButton_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pNVar4->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pNVar4->m_Items[(int)uVar1] = pNVar3;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pNVar3,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        return __this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

