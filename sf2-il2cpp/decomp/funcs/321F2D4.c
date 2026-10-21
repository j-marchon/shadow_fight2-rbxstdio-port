// FPPKHNNABAD$$GHPJIHEBELJ @ RVA 0x321F2D4

void FPPKHNNABAD__GHPJIHEBELJ
               (FPPKHNNABAD_o *__this,System_Xml_XmlNode_o *FNCCDFGKLAN,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  KFKFNDEJLKK_o *__this_00;
  KFKFNDEJLKK_array *pKVar5;
  int iVar6;
  System_Collections_Generic_List_KFKFNDEJLKK__o *__this_01;
  
  if ((DAT_04566f25 & 1) == 0) {
    FUN_01bab630(&KFKFNDEJLKK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFKFNDEJLKK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFKFNDEJLKK>_TrimExcess__);
    DAT_04566f25 = 1;
  }
  if (FNCCDFGKLAN == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar4 = (long *)(*(FNCCDFGKLAN->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (FNCCDFGKLAN,(FNCCDFGKLAN->klass->vtable)._13_get_ChildNodes.method);
  if (plVar4 != (long *)0x0) {
    iVar6 = 0;
    do {
      iVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      __this_01 = (__this->fields).AFFIHBMACFF;
      if (iVar3 <= iVar6) {
        if (__this_01 != (System_Collections_Generic_List_KFKFNDEJLKK__o *)0x0) {
          System_Collections_Generic_List<object>__TrimExcess
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     Method_System_Collections_Generic_List<KFKFNDEJLKK>_TrimExcess__);
          return;
        }
        break;
      }
      plVar4 = (long *)(*(FNCCDFGKLAN->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (FNCCDFGKLAN,(FNCCDFGKLAN->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar4 == (long *)0x0) break;
      AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                    (**(code **)(*plVar4 + 0x1c8))(plVar4,iVar6,*(undefined8 *)(*plVar4 + 0x1d0));
      __this_00 = (KFKFNDEJLKK_o *)thunk_FUN_01bda818(KFKFNDEJLKK_TypeInfo);
      KFKFNDEJLKK___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<KFKFNDEJLKK>_Add__;
      if (__this_01 == (System_Collections_Generic_List_KFKFNDEJLKK__o *)0x0) break;
      pKVar5 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pKVar5 == (KFKFNDEJLKK_array *)0x0) break;
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pKVar5->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pKVar5->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pKVar5->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar6 = iVar6 + 1;
      plVar4 = (long *)(*(FNCCDFGKLAN->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (FNCCDFGKLAN,(FNCCDFGKLAN->klass->vtable)._13_get_ChildNodes.method
                                 );
    } while (plVar4 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

