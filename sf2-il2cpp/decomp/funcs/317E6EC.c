// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$OnScroll @ RVA 0x317E6EC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__OnScroll
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *OOOCEFEJKCI,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  byte bVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Action_DFHAHEOKHFA__o *pSVar4;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar5;
  Nekki_SF2_GUI_BaseScrollItem_c *pNVar6;
  Il2CppClass *pIVar7;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045669a7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    DAT_045669a7 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).PNIMHIAPIMJ != false) {
    pSVar4 = (__this->fields).FJKKBHOCDFI;
    if (pSVar4 == (System_Action_DFHAHEOKHFA__o *)0x0) goto LAB_0327e8a4;
    (*(code *)(pSVar4->fields).super.super.invoke_impl)
              ((pSVar4->fields).super.super.method_code,(__this->fields).NEFMLODIKPE,
               (pSVar4->fields).super.super.method);
  }
  pNVar5 = (__this->fields)._scroll;
  if ((pNVar5 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (__this_00 = *(System_Collections_Generic_List_object__o **)&(pNVar5->fields)._snapEase,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,__this_00,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                        );
      if (!bVar3) break;
      if (local_50.fields._current == (Il2CppObject *)0x0) {
LAB_0327e8a0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar7 = (local_50.fields._current)->klass;
      bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_TypeInfo->_2).naturalAligment
      ;
      if (((pIVar7->_2).naturalAligment < bVar2) ||
         ((pIVar7->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_TypeInfo))
      goto LAB_0327e8a0;
      pIVar1 = local_50.fields._current;
      if ((pIVar7->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_TypeInfo) {
        pIVar1 = (Il2CppObject *)0x0;
      }
      (*pIVar1->klass->vtable[0x34].methodPtr)
                ((ulong)(uint)(__this->fields).JKOANJLODNP,pIVar1,pIVar1->klass->vtable[0x34].method
                );
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__
              );
    if (OOOCEFEJKCI != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
      pNVar6 = OOOCEFEJKCI->klass;
      bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_TypeInfo->_2).naturalAligment
      ;
      if ((bVar2 <= (pNVar6->_2).naturalAligment) &&
         ((pNVar6->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_TypeInfo)) {
        (*pNVar6[1]._1.image)((__this->fields).FDMLNHPDHKJ,OOOCEFEJKCI,pNVar6[1]._1.gc_desc);
        return;
      }
    }
  }
LAB_0327e8a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

