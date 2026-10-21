// FEPPOONJCGI$$IMHHMPMNGKB @ RVA 0x30B2974

void FEPPOONJCGI__IMHHMPMNGKB
               (FEPPOONJCGI_o *__this,KMJDCOABCCG_o *LFOOJOJHDFM,bool COPNBALDNLF,bool BGLBPHDOCGK,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EKGDLIKHEMA__o *__this_00;
  EKGDLIKHEMA_o *pEVar2;
  System_Xml_XmlElement_o *AHDGNOJPPIB;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  ACHLOMELAJE_o *__this_02;
  MethodInfo *method_00;
  System_String_o *CJNHFNHJHPE;
  int index;
  
  method_00 = (MethodInfo *)(ulong)BGLBPHDOCGK;
                    /* try { // try from 031b2978 to 032b297b has its CatchHandler @ 031b29a4 */
                    /* try { // try from 031b297c to 032b29b3 has its CatchHandler @ 031b0e98 */
  if ((DAT_045661ec & 1) == 0) {
                    /* catch() { ... } // from try @ 031b2978 with catch @ 031b29a4 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
                    /* try { // try from 031b29b4 to 032b29c7 has its CatchHandler @ 031b2b64 */
    FUN_01bab630(&EKGDLIKHEMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Count__);
                    /* catch() { ... } // from try @ 031b25ec with catch @ 031b29c8
                       catch() { ... } // from try @ 031b25fc with catch @ 031b29c8
                       try { // try from 031b29c8 to 032b29f7 has its CatchHandler @ 031b0e98 */
                    /* catch() { ... } // from try @ 031b25d0 with catch @ 031b29d0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Item__);
                    /* catch() { ... } // from try @ 031b25cc with catch @ 031b29d4 */
                    /* catch() { ... } // from try @ 031b25c8 with catch @ 031b29d8 */
                    /* catch() { ... } // from try @ 031b1a38 with catch @ 031b29dc */
    FUN_01bab630(&MDNLIFLBFNO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_2714);
                    /* try { // try from 031b29f8 to 032b29fb has its CatchHandler @ 031b2a24 */
                    /* try { // try from 031b29fc to 032b2a33 has its CatchHandler @ 031b0e98 */
    FUN_01bab630(&StringLiteral_19787);
    DAT_045661ec = 1;
  }
  if (LFOOJOJHDFM == (KMJDCOABCCG_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields).EBDCADCBPNM;
  if (__this_00 != (System_Collections_Generic_List_EKGDLIKHEMA__o *)0x0) {
    CJNHFNHJHPE = (LFOOJOJHDFM->fields).JIJLBFGKNJK;
                    /* catch() { ... } // from try @ 031b29f8 with catch @ 031b2a24 */
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        AHDGNOJPPIB = EIABCPKDEBD__BHPIHHJHELJ
                                ((__this->fields).KKJEGEBCAKB,StringLiteral_2714,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031b2a58 with catch @ 031b2a88 */
                    /* try { // try from 031b2a98 to 032b2aab has its CatchHandler @ 031b2b64 */
        pEVar2 = (EKGDLIKHEMA_o *)thunk_FUN_01bda818(EKGDLIKHEMA_TypeInfo);
        EKGDLIKHEMA___ctor(pEVar2,(System_Xml_XmlNode_o *)AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031b1444 with catch @ 031b2aac
                       try { // try from 031b2aac to 032b2acb has its CatchHandler @ 031b0e98 */
        if (pEVar2 != (EKGDLIKHEMA_o *)0x0) {
                    /* catch() { ... } // from try @ 031b1474 with catch @ 031b2ab0 */
                    /* catch() { ... } // from try @ 031b14b4 with catch @ 031b2ab4 */
          EKGDLIKHEMA__HCOCAAIGNNL(pEVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 031b2acc to 032b2acf has its CatchHandler @ 031b2ae8 */
          EKGDLIKHEMA__INOKKGKNDAH(pEVar2,COPNBALDNLF,(MethodInfo *)0x0);
          FEPPOONJCGI__BMANEGMLOAA(__this,pEVar2,LFOOJOJHDFM,method_00);
                    /* catch() { ... } // from try @ 031b2acc with catch @ 031b2ae8 */
          __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                      thunk_FUN_01bda818(MDNLIFLBFNO_TypeInfo);
          MDNLIFLBFNO___ctor((MDNLIFLBFNO_o *)__this_01,(MethodInfo *)0x0);
          if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (__this_01,StringLiteral_19787,(Il2CppObject *)CJNHFNHJHPE,
                       Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
                    /* try { // try from 031b2b28 to 032b2b4f has its CatchHandler @ 031b2b64 */
            NFNBHPOJFNJ__NOJIAJPLOKB(3,(MDNLIFLBFNO_o *)__this_01,false,(MethodInfo *)0x0);
            if (!BGLBPHDOCGK) {
              return;
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031b2b50 to 032b2b5b has its CatchHandler @ 031b0e98 */
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 031b2b5c to 032b2b63 has its CatchHandler @ 031b2b64 */
            if (DAT_04565b7d == '\0') {
                    /* catch() { ... } // from try @ 031b264c with catch @ 031b2b64
                       catch() { ... } // from try @ 031b2730 with catch @ 031b2b64
                       catch() { ... } // from try @ 031b276c with catch @ 031b2b64
                       catch() { ... } // from try @ 031b294c with catch @ 031b2b64
                       catch() { ... } // from try @ 031b29b4 with catch @ 031b2b64
                       catch() { ... } // from try @ 031b2a34 with catch @ 031b2b64
                       catch() { ... } // from try @ 031b2a98 with catch @ 031b2b64
                       catch() { ... } // from try @ 031b2b28 with catch @ 031b2b64
                       catch() { ... } // from try @ 031b2b5c with catch @ 031b2b64 */
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (__this_02 != (ACHLOMELAJE_o *)0x0) {
              CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_02,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
        break;
      }
                    /* try { // try from 031b2a34 to 032b2a47 has its CatchHandler @ 031b2b64 */
      pEVar2 = (EKGDLIKHEMA_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Item__);
      if (pEVar2 == (EKGDLIKHEMA_o *)0x0) break;
                    /* catch() { ... } // from try @ 031b1714 with catch @ 031b2a48
                       try { // try from 031b2a48 to 032b2a57 has its CatchHandler @ 031b0e98 */
      bVar1 = System_String__op_Equality(CJNHFNHJHPE,(pEVar2->fields).DEKCPPOJFEH,(MethodInfo *)0x0)
      ;
                    /* try { // try from 031b2a58 to 032b2a5b has its CatchHandler @ 031b2a88 */
      if (bVar1) {
        FEPPOONJCGI__ABFBENBACFN((FEPPOONJCGI_o *)0x1,pEVar2,COPNBALDNLF,BGLBPHDOCGK,method);
        return;
      }
                    /* try { // try from 031b2a5c to 032b2a97 has its CatchHandler @ 031b0e98 */
      __this_00 = (__this->fields).EBDCADCBPNM;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_EKGDLIKHEMA__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

