// CGALNIOABHK$$OPECGOMJLLP @ RVA 0x3447040

System_Collections_Generic_List_IIMNGGHGKOD__o *
CGALNIOABHK__OPECGOMJLLP
          (System_Xml_XmlNode_o *OBDMHHJBLKL,System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON
          ,MethodInfo *method)

{
  System_Collections_Generic_List_IIMNGGHGKOD__o *JGHPAFEFEFB;
  System_Xml_XmlNode_o *pSVar1;
  Il2CppObject *pIVar2;
  MethodInfo *pMVar3;
  int index;
  
                    /* try { // try from 0354705c to 036470e7 has its CatchHandler @ 0354705c
                       catch() { ... } // from try @ 0354705c with catch @ 0354705c
                       catch() { ... } // from try @ 03547100 with catch @ 0354705c
                       catch() { ... } // from try @ 03547144 with catch @ 0354705c
                       catch() { ... } // from try @ 03547174 with catch @ 0354705c */
  if ((DAT_0456824e & 1) == 0) {
    FUN_01bab630(&CGALNIOABHK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<IIMNGGHGKOD>_TypeInfo);
    FUN_01bab630(&StringLiteral_2731);
    DAT_0456824e = 1;
  }
  JGHPAFEFEFB = (System_Collections_Generic_List_IIMNGGHGKOD__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<IIMNGGHGKOD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
             Method_System_Collections_Generic_List<IIMNGGHGKOD>__ctor__);
  if (OBDMHHJBLKL != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 035470e8 to 036470ef has its CatchHandler @ 03547128 */
                    /* try { // try from 035470f8 to 036470ff has its CatchHandler @ 03547124 */
    pMVar3 = (OBDMHHJBLKL->klass->vtable)._51_get_Item.method;
                    /* try { // try from 03547100 to 0364713f has its CatchHandler @ 0354705c */
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(OBDMHHJBLKL->klass->vtable)._51_get_Item.methodPtr)(OBDMHHJBLKL,StringLiteral_2731);
    if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CGALNIOABHK_TypeInfo);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035470f8 with catch @ 03547124
                        */
    CGALNIOABHK__OPECGOMJLLP(pSVar1,JGHPAFEFEFB,pMVar3);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035470e8 with catch @ 03547128
                        */
    if ((EDMMHCAGPON != (System_Collections_Generic_List_XmlNode__o *)0x0) &&
       (0 < (EDMMHCAGPON->fields)._size)) {
                    /* try { // try from 03547140 to 03647143 has its CatchHandler @ 03547164 */
      index = 0;
      do {
                    /* try { // try from 03547144 to 0364716b has its CatchHandler @ 0354705c */
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)EDMMHCAGPON,index,
                            Method_System_Collections_Generic_List<XmlNode>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_035471b8;
                    /* catch() { ... } // from try @ 03547140 with catch @ 03547164 */
        pMVar3 = pIVar2->klass->vtable[0x33].method;
        pSVar1 = (System_Xml_XmlNode_o *)
                 (*pIVar2->klass->vtable[0x33].methodPtr)(pIVar2,StringLiteral_2731);
                    /* try { // try from 0354716c to 03647173 has its CatchHandler @ 03547188 */
                    /* try { // try from 03547174 to 0364717f has its CatchHandler @ 0354705c */
        if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03547180 to 03647187 has its CatchHandler @ 03547188 */
          thunk_FUN_01ba7564(CGALNIOABHK_TypeInfo);
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0354716c with catch @ 03547188
                       catch(type#2 @ 00000000) { ... } // from try @ 03547180 with catch @ 03547188
                        */
        CGALNIOABHK__OPECGOMJLLP(pSVar1,JGHPAFEFEFB,pMVar3);
        index = index + 1;
      } while (index < (EDMMHCAGPON->fields)._size);
    }
    return JGHPAFEFEFB;
  }
LAB_035471b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

