// FIBPEPMPJDI$$HNIHOIAMDPC @ RVA 0x33200F0

void FIBPEPMPJDI__HNIHOIAMDPC
               (FIBPEPMPJDI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *__this_01;
  System_Collections_Generic_List_ILGLOCBJFEG__o *pSVar2;
  int32_t iVar3;
  System_Collections_Generic_List_ILGLOCBJFEG__o **ppSVar4;
  
                    /* try { // try from 03420108 to 0352011f has its CatchHandler @ 034201a0 */
  if ((DAT_04567842 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2948);
    FUN_01bab630(&StringLiteral_9975);
                    /* try { // try from 03420124 to 0352012f has its CatchHandler @ 0342019c */
    FUN_01bab630(&StringLiteral_13991);
                    /* try { // try from 03420134 to 0352013f has its CatchHandler @ 034201a4 */
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 03420140 to 03520193 has its CatchHandler @ 0341fef8 */
    DAT_04567842 = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  (__this->fields).OEMKHNGBKDA = 0;
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
LAB_03420210:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00 = (System_Xml_XmlAttributeCollection_o *)
              (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                        (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03420210;
  LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                          (__this_00,StringLiteral_13991,(MethodInfo *)0x0);
                    /* try { // try from 03420194 to 03520197 has its CatchHandler @ 034201ac */
                    /* try { // try from 03420198 to 0352019b has its CatchHandler @ 034201a8 */
  __this_01 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03420124 with catch @ 0342019c
                       try { // try from 0342019c to 035201cf has its CatchHandler @ 0341fef8 */
  if (__this_01 == (System_String_o *)0x0) goto LAB_03420210;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03420108 with catch @ 034201a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03420134 with catch @ 034201a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03420198 with catch @ 034201a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03420194 with catch @ 034201ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034200e4 with catch @ 034201b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034200d4 with catch @ 034201b4
                        */
  bVar1 = System_String__Equals(__this_01,StringLiteral_9975,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03420090 with catch @ 034201b8
                        */
  if (bVar1) {
    iVar3 = 1;
  }
  else {
                    /* try { // try from 034201d0 to 035201d3 has its CatchHandler @ 03420204 */
                    /* try { // try from 034201d4 to 03520213 has its CatchHandler @ 0341fef8 */
    bVar1 = System_String__Equals(__this_01,StringLiteral_2948,(MethodInfo *)0x0);
    if (!bVar1) goto LAB_034201e8;
    iVar3 = 2;
  }
  (__this->fields).OEMKHNGBKDA = iVar3;
LAB_034201e8:
  pSVar2 = ILGLOCBJFEG__EOHMFJFFFIN
                     (AHDGNOJPPIB,(__this->fields).super.super._MEFGNAIILBJ_k__BackingField,
                      (MethodInfo *)0x0);
  ppSVar4 = &(__this->fields).KPFGHBEKJIM;
  *ppSVar4 = pSVar2;
                    /* catch() { ... } // from try @ 034201d0 with catch @ 03420204 */
  thunk_FUN_01c20e04(ppSVar4,pSVar2);
  return;
}

