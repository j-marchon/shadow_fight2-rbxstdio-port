// CFEANGJDHEE$$LEFFJKAJLIO @ RVA 0x30AEE38

void CFEANGJDHEE__LEFFJKAJLIO(JOCIOCLPIHI_o *OHKEKFCKBED,MethodInfo *method)

{
  bool bVar1;
  int32_t DPJIDNBJIBG;
  System_Net_HttpListenerRequest_o *pSVar2;
  System_Collections_Specialized_NameValueCollection_o *pSVar3;
  System_String_o *value;
  System_Net_HttpListenerResponse_o *IDCGLBOIAFJ;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_String_o *AIGOBLJEBCA;
  
                    /* try { // try from 031aee48 to 032aeeb3 has its CatchHandler @ 031ae8b4 */
  if ((DAT_045661c7 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&StringLiteral_18971);
    FUN_01bab630(&StringLiteral_21448);
    DAT_045661c7 = 1;
  }
  if (((OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0) &&
      (pSVar2 = JOCIOCLPIHI__AEIKKFELIDK(OHKEKFCKBED,(MethodInfo *)0x0),
      pSVar2 != (System_Net_HttpListenerRequest_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).query_string,
     pSVar3 != (System_Collections_Specialized_NameValueCollection_o *)0x0)) {
                    /* try { // try from 031aeeb4 to 032aeec3 has its CatchHandler @ 031aeec4 */
    value = (System_String_o *)
            (*(pSVar3->klass->vtable)._16_Get.methodPtr)
                      (pSVar3,StringLiteral_18971,(pSVar3->klass->vtable)._16_Get.method);
                    /* catch() { ... } // from try @ 031aee30 with catch @ 031aeec4
                       catch() { ... } // from try @ 031aeeb4 with catch @ 031aeec4 */
                    /* try { // try from 031aeec8 to 032aeecb has its CatchHandler @ 031aeed4 */
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
                    /* try { // try from 031aeecc to 032aeed7 has its CatchHandler @ 031ae8b4 */
    AIGOBLJEBCA = (System_String_o *)0x0;
    if (!bVar1) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031aeec8 with catch @ 031aeed4
                        */
      DPJIDNBJIBG = PCOEHCPGBBG__JBGCINPPLAC(value,0,(MethodInfo *)0x0);
      method_00 = extraout_x1;
      if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo);
        method_00 = extraout_x1_00;
      }
      AIGOBLJEBCA = CFEANGJDHEE__CMACDPGGCHO(DPJIDNBJIBG,method_00);
    }
    IDCGLBOIAFJ = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
    KEBDCIFDLPB__GPDJFFJALIB(IDCGLBOIAFJ,AIGOBLJEBCA,StringLiteral_21448,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

