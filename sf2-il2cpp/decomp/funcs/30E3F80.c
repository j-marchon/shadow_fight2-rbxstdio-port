// POECGHDENAF$$ABJJDDOFODH @ RVA 0x30E3F80

bool POECGHDENAF__ABJJDDOFODH
               (GBJGJEGPHKD_o *INNMCFJNEAE,System_Collections_Generic_List_XmlNode__o *OBDMHHJBLKL,
               System_Collections_Generic_List_string__o *MEOBNMMHFGG,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_String_o *AAIHDEKMIJG;
  System_String_o *LFGKEPCBPKF;
  System_Xml_XmlDocument_o *pSVar3;
  long *plVar4;
  System_Object_array *args;
  long lVar5;
  undefined8 uVar6;
  System_Xml_XmlNode_array *pSVar7;
  int index;
  MDFGJKBMECA_OJOAPHBHAFL_o *__this;
  
                    /* catch() { ... } // from try @ 031e3f70 with catch @ 031e3f9c */
  if ((DAT_045663cd & 1) == 0) {
                    /* try { // try from 031e3fac to 032e3fb3 has its CatchHandler @ 031e3fc8 */
                    /* try { // try from 031e3fb4 to 032e3fbf has its CatchHandler @ 031e2854 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 031e3fc0 to 032e3fc7 has its CatchHandler @ 031e3fc8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_Add__);
                    /* catch() { ... } // from try @ 031e3fac with catch @ 031e3fc8
                       catch() { ... } // from try @ 031e3fc0 with catch @ 031e3fc8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_6388);
    FUN_01bab630(&StringLiteral_9548);
    INNMCFJNEAE = (GBJGJEGPHKD_o *)FUN_01bab630(&StringLiteral_11719);
    DAT_045663cd = 1;
  }
  if (MEOBNMMHFGG == (System_Collections_Generic_List_string__o *)0x0) {
LAB_031e41c8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(INNMCFJNEAE);
  }
  iVar1 = (MEOBNMMHFGG->fields)._size;
  if (0 < iVar1) {
    index = 0;
    do {
      if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = MDFGJKBMECA_TypeInfo->static_fields->FGJCGBEGDOC;
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
      }
      AAIHDEKMIJG = MGENAMAJALB__CIKNLBCABMJ((MethodInfo *)0x0);
      LFGKEPCBPKF = (System_String_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)MEOBNMMHFGG,index,
                               Method_System_Collections_Generic_List<string>_get_Item__);
      INNMCFJNEAE = (GBJGJEGPHKD_o *)
                    GIAMPEGMNHE__JIGCIBMKDAL(AAIHDEKMIJG,LFGKEPCBPKF,(MethodInfo *)0x0);
      if (__this == (MDFGJKBMECA_OJOAPHBHAFL_o *)0x0) goto LAB_031e41c8;
      pSVar3 = MDFGJKBMECA_OJOAPHBHAFL__BGPCDOCFCEH
                         (__this,(System_String_o *)INNMCFJNEAE,(MethodInfo *)0x0);
      if (pSVar3 == (System_Xml_XmlDocument_o *)0x0) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        INNMCFJNEAE = (GBJGJEGPHKD_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)MEOBNMMHFGG,index,
                                 Method_System_Collections_Generic_List<string>_get_Item__);
        if (args != (System_Object_array *)0x0) {
          if ((INNMCFJNEAE != (GBJGJEGPHKD_o *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(INNMCFJNEAE,(((args->obj).klass)->_1).element_class),
             lVar5 == 0)) {
            uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar6,0);
          }
          if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          args->m_Items[0] = (Il2CppObject *)INNMCFJNEAE;
          thunk_FUN_01c20e04(args->m_Items,INNMCFJNEAE);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_6388,args,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        goto LAB_031e41c8;
      }
      plVar4 = (long *)(*(pSVar3->klass->vtable)._51_get_Item.methodPtr)
                                 (pSVar3,StringLiteral_11719,
                                  (pSVar3->klass->vtable)._51_get_Item.method);
      INNMCFJNEAE = (GBJGJEGPHKD_o *)0x0;
      if (plVar4 == (long *)0x0) goto LAB_031e41c8;
      INNMCFJNEAE = (GBJGJEGPHKD_o *)
                    (**(code **)(*plVar4 + 0x468))
                              (plVar4,StringLiteral_9548,*(undefined8 *)(*plVar4 + 0x470));
      lVar5 = Method_System_Collections_Generic_List<XmlNode>_Add__;
      if (INNMCFJNEAE != (GBJGJEGPHKD_o *)0x0) {
        if (OBDMHHJBLKL == (System_Collections_Generic_List_XmlNode__o *)0x0) goto LAB_031e41c8;
        pSVar7 = (OBDMHHJBLKL->fields)._items;
        (OBDMHHJBLKL->fields)._version = (OBDMHHJBLKL->fields)._version + 1;
        if (pSVar7 == (System_Xml_XmlNode_array *)0x0) goto LAB_031e41c8;
        uVar2 = (OBDMHHJBLKL->fields)._size;
        if (uVar2 < (uint)pSVar7->max_length) {
          (OBDMHHJBLKL->fields)._size = uVar2 + 1;
          pSVar7->m_Items[(int)uVar2] = (System_Xml_XmlNode_o *)INNMCFJNEAE;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)OBDMHHJBLKL,
                     (Il2CppObject *)INNMCFJNEAE,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
      index = index + 1;
    } while (iVar1 != index);
  }
  return true;
}

