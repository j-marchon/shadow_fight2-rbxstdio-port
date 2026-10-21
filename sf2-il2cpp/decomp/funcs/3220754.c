// FPPKHNNABAD$$CNCNKEOHACM @ RVA 0x3220754

void FPPKHNNABAD__CNCNKEOHACM
               (FPPKHNNABAD_o *__this,System_Xml_XmlNode_o *IMDMDPMLEKD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *item;
  System_String_array *pSVar5;
  int iVar6;
  System_Collections_Generic_List_string__o *__this_01;
  
  if ((DAT_04566f2e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_TrimExcess__);
    FUN_01bab630(&StringLiteral_9327);
    DAT_04566f2e = 1;
  }
  if (IMDMDPMLEKD == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar4 = (long *)(*(IMDMDPMLEKD->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (IMDMDPMLEKD,(IMDMDPMLEKD->klass->vtable)._13_get_ChildNodes.method);
  if (plVar4 != (long *)0x0) {
    iVar6 = 0;
    while( true ) {
      iVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      __this_01 = (__this->fields).OOOHAAJIABL;
      if (iVar3 <= iVar6) break;
      plVar4 = (long *)(*(IMDMDPMLEKD->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (IMDMDPMLEKD,(IMDMDPMLEKD->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (((plVar4 == (long *)0x0) ||
          (plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))
                                      (plVar4,iVar6,*(undefined8 *)(*plVar4 + 0x1d0)),
          plVar4 == (long *)0x0)) ||
         (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                      (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)),
         __this_00 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_033208fc;
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
      item = GIAMPEGMNHE__LFCNNAGLPHO(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_033208fc;
      pSVar5 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pSVar5 == (System_String_array *)0x0) goto LAB_033208fc;
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pSVar5->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pSVar5->m_Items[(int)uVar1] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar6 = iVar6 + 1;
      plVar4 = (long *)(*(IMDMDPMLEKD->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (IMDMDPMLEKD,(IMDMDPMLEKD->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar4 == (long *)0x0) goto LAB_033208fc;
    }
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List<object>__TrimExcess
                ((System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<string>_TrimExcess__);
      return;
    }
  }
LAB_033208fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

