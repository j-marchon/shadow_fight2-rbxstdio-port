// NLFLMJPNOLF$$ToString @ RVA 0x32A780C

System_String_o * NLFLMJPNOLF__ToString(NLFLMJPNOLF_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 033a7540 with catch @ 033a780c */
                    /* catch() { ... } // from try @ 033a7518 with catch @ 033a7810 */
                    /* catch() { ... } // from try @ 033a7784 with catch @ 033a7814 */
                    /* catch() { ... } // from try @ 033a7780 with catch @ 033a7818 */
                    /* catch() { ... } // from try @ 033a777c with catch @ 033a781c */
                    /* catch() { ... } // from try @ 033a7770 with catch @ 033a7820 */
                    /* catch() { ... } // from try @ 033a75ac with catch @ 033a7824 */
                    /* catch() { ... } // from try @ 033a7674 with catch @ 033a7828
                       catch() { ... } // from try @ 033a77a0 with catch @ 033a7828 */
  if ((DAT_04567405 & 1) == 0) {
                    /* catch() { ... } // from try @ 033a75d0 with catch @ 033a782c
                       catch() { ... } // from try @ 033a778c with catch @ 033a782c */
                    /* catch() { ... } // from try @ 033a7714 with catch @ 033a7830
                       catch() { ... } // from try @ 033a7774 with catch @ 033a7830
                       catch() { ... } // from try @ 033a77b4 with catch @ 033a7830 */
                    /* catch() { ... } // from try @ 033a74f4 with catch @ 033a7834 */
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
                    /* catch() { ... } // from try @ 033a74b8 with catch @ 033a7838 */
    DAT_04567405 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 033a76cc with catch @ 033a7844 */
                    /* catch() { ... } // from try @ 033a7628 with catch @ 033a7848 */
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

