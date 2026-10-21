// CGALNIOABHK$$HNOMDBJEICP @ RVA 0x3446330

void CGALNIOABHK__HNOMDBJEICP
               (System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON,ECENNHNBAME_o *NLEBDPHNIDI,
               System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *PHOLAJOMLEL,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar3;
  FCFGGKLDBFJ_o *pFVar4;
  int index;
  
  if ((DAT_0456824b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_Add__);
                    /* try { // try from 03546370 to 0364639b has its CatchHandler @ 03546764 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_get_Item__);
    FUN_01bab630(&FCFGGKLDBFJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&StringLiteral_9327);
    DAT_0456824b = 1;
  }
  if (EDMMHCAGPON != (System_Collections_Generic_List_XmlNode__o *)0x0) {
                    /* try { // try from 035463cc to 036463d3 has its CatchHandler @ 03546750 */
    if (0 < (EDMMHCAGPON->fields)._size) {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)EDMMHCAGPON,index,
                            Method_System_Collections_Generic_List<XmlNode>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03546504;
        __this = (System_Xml_XmlAttributeCollection_o *)
                 (*pIVar2->klass->vtable[0x10].methodPtr)(pIVar2,pIVar2->klass->vtable[0x10].method)
        ;
                    /* try { // try from 03546414 to 0364642f has its CatchHandler @ 03546754 */
        if ((__this == (System_Xml_XmlAttributeCollection_o *)0x0) ||
           (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (__this,StringLiteral_9327,(MethodInfo *)0x0),
           pSVar3 == (System_Xml_XmlAttribute_o *)0x0)) goto LAB_03546504;
        pIVar2 = (Il2CppObject *)
                 (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
                    /* try { // try from 03546430 to 0364651f has its CatchHandler @ 0354600c */
        if (PHOLAJOMLEL == (System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *)0x0)
        goto LAB_03546504;
        bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)PHOLAJOMLEL,
                           pIVar2,
                           Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_ContainsKey__
                          );
        if (bVar1) {
          pFVar4 = (FCFGGKLDBFJ_o *)
                   System_Collections_Generic_Dictionary<object,_object>__get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)PHOLAJOMLEL
                              ,pIVar2,
                              Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_get_Item__
                             );
          if (pFVar4 == (FCFGGKLDBFJ_o *)0x0) goto LAB_03546504;
          FCFGGKLDBFJ__ACHCKILJGJK(pFVar4,NLEBDPHNIDI,(MethodInfo *)0x0);
        }
        index = index + 1;
      } while (index < (EDMMHCAGPON->fields)._size);
    }
    if ((NLEBDPHNIDI != (ECENNHNBAME_o *)0x0) &&
       (PHOLAJOMLEL != (System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *)0x0)) {
      bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)PHOLAJOMLEL,
                         (Il2CppObject *)(NLEBDPHNIDI->fields).JIJLBFGKNJK,
                         Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_ContainsKey__
                        );
      if (bVar1) {
        return;
      }
      pFVar4 = (FCFGGKLDBFJ_o *)thunk_FUN_01bda818(FCFGGKLDBFJ_TypeInfo);
      FCFGGKLDBFJ___ctor(pFVar4,NLEBDPHNIDI,(MethodInfo *)0x0);
      if (pFVar4 != (FCFGGKLDBFJ_o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)PHOLAJOMLEL,
                   (Il2CppObject *)(pFVar4->fields).NPFMOEOIEKM,(Il2CppObject *)pFVar4,
                   Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_Add__);
        return;
      }
    }
  }
LAB_03546504:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

