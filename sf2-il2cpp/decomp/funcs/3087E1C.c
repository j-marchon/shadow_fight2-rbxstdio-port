// FMOACLJMJKF$$KMGOILJJOPB @ RVA 0x3087E1C

void FMOACLJMJKF__KMGOILJJOPB
               (System_Xml_XmlNode_o *ELOCKFLGKNO,System_Xml_XmlNode_o *KENFFDHLNDA,
               System_Collections_Generic_List_string__o *PHOLAJOMLEL,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlNode_o *JGHIJMJNJLE;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_array *collection;
  MethodInfo *pMVar2;
  MethodInfo *method_00;
  int index;
  
  method_00 = (MethodInfo *)(ulong)(uint)DPJIDNBJIBG;
  pMVar2 = method_00;
  do {
    if ((DAT_0456602d & 1) == 0) {
      FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
      FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
      FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
      FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
      FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
      FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
      FUN_01bab630(&StringLiteral_12864);
      FUN_01bab630(&StringLiteral_1);
      DAT_0456602d = 1;
    }
    if (PHOLAJOMLEL == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03187fe8;
    index = (int)pMVar2;
    if ((PHOLAJOMLEL->fields)._size <= index) {
      return;
    }
    pMVar2 = Method_System_Collections_Generic_List<string>_get_Item__;
    pSVar1 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index,
                        (MethodInfo_26E4ADC *)
                        Method_System_Collections_Generic_List<string>_get_Item__);
    JGHIJMJNJLE = FMOACLJMJKF__DIPCNFGOHKJ(ELOCKFLGKNO,pSVar1,pMVar2);
    if (JGHIJMJNJLE != (System_Xml_XmlNode_o *)0x0) {
      pMVar2 = (MethodInfo *)0x0;
      FMOACLJMJKF__INFAEBPFJFC(KENFFDHLNDA,JGHIJMJNJLE,false,method_00);
      FMOACLJMJKF__IGKCKMGGGFM(KENFFDHLNDA,JGHIJMJNJLE,pMVar2);
      __this = (System_Xml_XmlAttributeCollection_o *)
               (*(JGHIJMJNJLE->klass->vtable)._16_get_Attributes.methodPtr)
                         (JGHIJMJNJLE,(JGHIJMJNJLE->klass->vtable)._16_get_Attributes.method);
      if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03187fe8;
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this,StringLiteral_12864,(MethodInfo *)0x0);
      if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
        pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
        __this_00 = (System_Collections_Generic_List_object__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
        if (pSVar1 == (System_String_o *)0x0) {
LAB_03187fe8:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        method_00 = (MethodInfo *)0x0;
        collection = System_String__Split(pSVar1,0x7c,0,(MethodInfo *)0x0);
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03187fe8;
        System_Collections_Generic_List<object>__AddRange
                  (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
                   Method_System_Collections_Generic_List<string>_AddRange__);
        DJNBJHPDKDP__OFNFOGHFDML<object>
                  ((System_Collections_Generic_List_T__o *)PHOLAJOMLEL,
                   (System_Collections_Generic_List_T__o *)__this_00,
                   Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
      }
    }
    pMVar2 = (MethodInfo *)(ulong)(index + 1);
  } while( true );
}

