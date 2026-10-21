// CNIGOFCKBGI$$.ctor @ RVA 0x31B556C

void CNIGOFCKBGI___ctor(CNIGOFCKBGI_o *__this,int32_t ACCIHBHMFPN,int32_t HEHMPFLAEGE,
                       System_Xml_XmlNode_o *AHDGNOJPPIB,CNIGOFCKBGI_o *IIFCMNNGAHG,
                       MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_OHFNEFFMKIA__o *__this_00;
  System_Collections_Generic_HashSet_OHFNEFFMKIA__o **ppSVar2;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
                    /* try { // try from 032b5590 to 033b5593 has its CatchHandler @ 032b55a4 */
                    /* try { // try from 032b5594 to 033b5597 has its CatchHandler @ 032b55a0 */
                    /* try { // try from 032b5598 to 033b55c7 has its CatchHandler @ 032b5420 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5510 with catch @ 032b559c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5594 with catch @ 032b55a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5590 with catch @ 032b55a4
                        */
  if ((DAT_04566baf & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5554 with catch @ 032b55a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5514 with catch @ 032b55ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b54e8 with catch @ 032b55b0
                        */
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<OHFNEFFMKIA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<OHFNEFFMKIA>_TypeInfo);
                    /* try { // try from 032b55c8 to 033b55cb has its CatchHandler @ 032b55ec */
    FUN_01bab630(&StringLiteral_5219);
                    /* try { // try from 032b55cc to 033b55f3 has its CatchHandler @ 032b5420 */
    DAT_04566baf = 1;
  }
  AJNNHGGLGIF___ctor((AJNNHGGLGIF_o *)__this,ACCIHBHMFPN,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b55c8 with catch @ 032b55ec */
  (__this->fields).JGJNBILDCHK = HEHMPFLAEGE;
  (__this->fields).EJNOHBNPCGC = false;
  (__this->fields).EGBPMNKKPFI = true;
                    /* try { // try from 032b55f4 to 033b55fb has its CatchHandler @ 032b5610 */
  __this_00 = (System_Collections_Generic_HashSet_OHFNEFFMKIA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<OHFNEFFMKIA>_TypeInfo);
                    /* try { // try from 032b55fc to 033b5607 has its CatchHandler @ 032b5420 */
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             Method_System_Collections_Generic_HashSet<OHFNEFFMKIA>__ctor__);
  ppSVar2 = &(__this->fields).ANPLGGBAANL;
                    /* try { // try from 032b5608 to 033b560f has its CatchHandler @ 032b5610 */
  *ppSVar2 = __this_00;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b55f4 with catch @ 032b5610
                       catch(type#2 @ 00000000) { ... } // from try @ 032b5608 with catch @ 032b5610
                        */
                    /* try { // try from 032b5614 to 033b56ef has its CatchHandler @ 032b5614
                       catch() { ... } // from try @ 032b5614 with catch @ 032b5614
                       catch() { ... } // from try @ 032b5734 with catch @ 032b5614
                       catch() { ... } // from try @ 032b5790 with catch @ 032b5614
                       catch() { ... } // from try @ 032b57c0 with catch @ 032b5614
                       catch() { ... } // from try @ 032b5800 with catch @ 032b5614 */
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_01 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_01,StringLiteral_5219,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,false,(MethodInfo *)0x0);
      (__this->fields).EJNOHBNPCGC = bVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

