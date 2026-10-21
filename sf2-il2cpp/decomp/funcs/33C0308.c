// CUDLR.Server$$JAFNGKOEHGH @ RVA 0x33C0308

void CUDLR_Server__JAFNGKOEHGH
               (CUDLR_Server_o *__this,JOCIOCLPIHI_o *OHKEKFCKBED,bool INADPMLBJHN,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Networking_UnityWebRequest_o *__this_00;
  System_String_o *pSVar2;
  System_Net_HttpListenerResponse_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *format;
  UnityEngine_Networking_DownloadHandler_o *__this_01;
  MethodInfo *in_x5;
  System_String_o **ppSVar7;
  System_String_o *local_48;
  System_String_o *local_38;
  
  if ((DAT_04567dc8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_191);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_192);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_193);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_194);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_195);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_196);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_197);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_198);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_IO_Path_TypeInfo);
    DAT_04567dc8 = 1;
  }
  local_38 = (System_String_o *)0x0;
  local_48 = (System_String_o *)0x0;
  CUDLR_Server__CFCJGDIMHBA(__this,OHKEKFCKBED,INADPMLBJHN,&local_38,&local_48,in_x5);
  __this_00 = UnityEngine_Networking_UnityWebRequest__Get(local_38,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    UnityEngine_Networking_UnityWebRequest__SendWebRequest(__this_00,(MethodInfo *)0x0);
    while (bVar1 = UnityEngine_Networking_UnityWebRequest__get_isDone(__this_00,(MethodInfo *)0x0),
          !bVar1) {
      System_Threading_Thread__Sleep(0,(MethodInfo *)0x0);
    }
    pSVar2 = UnityEngine_Networking_UnityWebRequest__get_error(__this_00,(MethodInfo *)0x0);
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      if ((OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0) &&
         (pSVar3 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0),
         pSVar3 != (System_Net_HttpListenerResponse_o *)0x0)) {
        System_Net_HttpListenerResponse__set_ContentType(pSVar3,local_48,(MethodInfo *)0x0);
        if (INADPMLBJHN) {
          pSVar3 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_191,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_192,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_193,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_194,
                     (MethodInfo *)0x0);
          format = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          pSVar2 = local_38;
          if ((System_IO_Path_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(System_IO_Path_TypeInfo);
          }
          pSVar2 = System_IO_Path__GetFileName(pSVar2,(MethodInfo *)0x0);
          pSVar2 = System_String__Format(format,(Il2CppObject *)pSVar2,(MethodInfo *)0x0);
          if (pSVar3 == (System_Net_HttpListenerResponse_o *)0x0) goto LAB_034c0724;
          System_Net_HttpListenerResponse__AddHeader(pSVar3,pSVar6,pSVar2,(MethodInfo *)0x0);
        }
        pSVar3 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
        __this_01 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler
                              (__this_00,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Networking_DownloadHandler_o *)0x0) {
          pSVar4 = UnityEngine_Networking_DownloadHandler__get_data(__this_01,(MethodInfo *)0x0);
          KEBDCIFDLPB__NLNJOGEGAPH(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 034c0718 to 035c071b has its CatchHandler @ 034c0724 */
                    /* try { // try from 034c071c to 035c073f has its CatchHandler @ 034c0614 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034c06dc with catch @ 034c0720
                        */
          return;
        }
      }
    }
    else {
      pSVar2 = UnityEngine_Networking_UnityWebRequest__get_error(__this_00,(MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_195,(MethodInfo *)0x0
                );
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034c0614 to 035c06ab has its CatchHandler @ 034c0614
                       catch() { ... } // from try @ 034c0614 with catch @ 034c0614
                       catch() { ... } // from try @ 034c06fc with catch @ 034c0614
                       catch() { ... } // from try @ 034c071c with catch @ 034c0614
                       catch() { ... } // from try @ 034c0744 with catch @ 034c0614
                       catch() { ... } // from try @ 034c0784 with catch @ 034c0614 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_196,(MethodInfo *)0x0
                );
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if ((pSVar2 != (System_String_o *)0x0) &&
         (bVar1 = System_String__StartsWith(pSVar2,pSVar6,(MethodInfo *)0x0),
         OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0)) {
        if (bVar1) {
          (OHKEKFCKBED->fields).IPOHACONDOB = true;
          return;
        }
        pSVar3 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
        if (pSVar3 != (System_Net_HttpListenerResponse_o *)0x0) {
          System_Net_HttpListenerResponse__set_StatusCode(pSVar3,500,(MethodInfo *)0x0);
          pSVar3 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_197,
                     (MethodInfo *)0x0);
                    /* try { // try from 034c06ac to 035c06b3 has its CatchHandler @ 034c0728 */
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_198,
                     (MethodInfo *)0x0);
          pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 034c06dc to 035c06fb has its CatchHandler @ 034c0720 */
          pSVar6 = UnityEngine_Networking_UnityWebRequest__get_error(__this_00,(MethodInfo *)0x0);
          pSVar2 = System_String__Format(pSVar2,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
          if (pSVar3 != (System_Net_HttpListenerResponse_o *)0x0) {
            ppSVar7 = &(pSVar3->fields).status_description;
                    /* try { // try from 034c06fc to 035c0717 has its CatchHandler @ 034c0614 */
            *ppSVar7 = pSVar2;
            thunk_FUN_01c20e04(ppSVar7,pSVar2);
            return;
          }
        }
      }
    }
  }
LAB_034c0724:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034c0718 with catch @ 034c0724
                        */
  FUN_01bab8c8();
}

