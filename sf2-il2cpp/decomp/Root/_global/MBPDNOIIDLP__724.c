// TypeDefIndex 724
// Namespace: 
// public class MBPDNOIIDLP : ILGLOCBJFEG
// Fields:
//   private string JIJLBFGKNJK; // 0x38
//   private string BFBIEPIDBON; // 0x40

// ===== public override bool EPBENPDCBFE(OLKKAIFGGAK BCKBBGCOMJD, List<string> FPEHEJBLCAO)  [RVA 0x304611C]
// MBPDNOIIDLP$$EPBENPDCBFE @ RVA 0x304611C

bool MBPDNOIIDLP__EPBENPDCBFE
               (MBPDNOIIDLP_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  System_String_o *BCAEOEOGHLP;
  bool bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 0314613c to 0324614b has its CatchHandler @ 031461bc */
  if ((DAT_04565dd6 & 1) == 0) {
                    /* try { // try from 03146150 to 03246153 has its CatchHandler @ 031461b8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
                    /* try { // try from 0314615c to 03246177 has its CatchHandler @ 031461c0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
                    /* try { // try from 03146178 to 032461af has its CatchHandler @ 03146078 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&MMDDDDFHOLG_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565dd6 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 031461b0 to 032461b3 has its CatchHandler @ 031461c0 */
  bVar1 = System_String__op_Inequality
                    ((__this->fields).BFBIEPIDBON,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* try { // try from 031461b4 to 032461d7 has its CatchHandler @ 03146078 */
  if (bVar1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03146150 with catch @ 031461b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314613c with catch @ 031461bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314615c with catch @ 031461c0
                       catch(type#1 @ 03f99f68) { ... } // from try @ 031461b0 with catch @ 031461c0
                        */
    pSVar3 = (__this->fields).JIJLBFGKNJK;
    BCAEOEOGHLP = (__this->fields).BFBIEPIDBON;
    if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031461d8 to 032461db has its CatchHandler @ 031461e8 */
    bVar1 = MMDDDDFHOLG__EBELLMAHLEE(pSVar3,BCAEOEOGHLP,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
  }
                    /* try { // try from 031461f4 to 032461ff has its CatchHandler @ 03146214 */
  ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
                    /* try { // try from 03146200 to 0324620b has its CatchHandler @ 03146078 */
  bVar1 = false;
  if ((BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) &&
     (FPEHEJBLCAO != (System_Collections_Generic_List_string__o *)0x0)) {
                    /* try { // try from 0314620c to 03246213 has its CatchHandler @ 03146214 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031461f4 with catch @ 03146214
                       catch(type#2 @ 00000000) { ... } // from try @ 0314620c with catch @ 03146214
                        */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)FPEHEJBLCAO,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      if (!bVar1) {
        iVar4 = 8;
        goto LAB_03146264;
      }
      pSVar3 = (__this->fields).JIJLBFGKNJK;
      if (pSVar3 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals
                        (pSVar3,(System_String_o *)local_48.fields._current,(MethodInfo *)0x0);
    } while (!bVar2);
    iVar4 = 7;
LAB_03146264:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    bVar1 = bVar1 && iVar4 == 7;
  }
  return bVar1;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3046320]
// MBPDNOIIDLP$$HNIHOIAMDPC @ RVA 0x3046320

void MBPDNOIIDLP__HNIHOIAMDPC
               (MBPDNOIIDLP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04565dd7 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9345/*"Namespace"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565dd7 = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).JIJLBFGKNJK = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_9345/*"Namespace"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).BFBIEPIDBON;
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3046420]
// MBPDNOIIDLP$$.ctor @ RVA 0x3046420

void MBPDNOIIDLP___ctor(MBPDNOIIDLP_o *__this,MethodInfo *method)

{
  ILGLOCBJFEG___ctor((ILGLOCBJFEG_o *)__this,(MethodInfo *)0x0);
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,0xc,(MethodInfo *)0x0);
  return;
}

