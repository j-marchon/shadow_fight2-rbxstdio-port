// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$JLKJMLBAHAG @ RVA 0x311507C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__JLKJMLBAHAG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 uVar3;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar4;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this_01;
  undefined1 auVar5 [16];
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_045665a6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_TypeInfo);
    auVar5 = FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045665a6 = 1;
  }
  uVar3 = auVar5._0_8_;
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pNVar4 = (__this->fields).PDHMLFAMNCO;
  if (pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    __this_00 = *(System_Collections_Generic_List_object__o **)&(pNVar4->fields)._snapEase;
    uVar3 = 0;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,__this_00,
                 Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                          );
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
          return;
        }
        if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)local_50.fields._current ==
            (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)0x0) {
LAB_03215178:
          __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)0x0;
        }
        else {
          bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_TypeInfo->_2).
                  naturalAligment;
          if ((((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_c *)
               (local_50.fields._current)->klass)->_2).naturalAligment < bVar1) goto LAB_03215178;
          __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)
                      local_50.fields._current;
          if ((((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_c *)
               (local_50.fields._current)->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_TypeInfo) {
            __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)0x0;
          }
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if (__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__UpdateDanAndStatus
                    (__this_01,(MethodInfo *)0x0);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar3,auVar5._8_8_);
}

