// FKDLCJJOGIP$$GIENGNEGHPJ @ RVA 0x350ACDC

void FKDLCJJOGIP__GIENGNEGHPJ(FKDLCJJOGIP_o *__this,int32_t KEMDLBKINAD,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str1;
  NDPMLPGANCI_o *pNVar5;
  JMDPBFOCHHP_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Enum_o local_68;
  int32_t local_58;
  
  if ((DAT_045688c3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_38);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4035);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4036);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4037);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GGDMJFCJJFH_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045688c3 = 1;
  }
  (__this->fields).KOMAKPPBFEM = KEMDLBKINAD;
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4035,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4036,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  local_68.klass = (System_Enum_c *)GGDMJFCJJFH_TypeInfo;
  local_68.monitor = (void *)0xffffffffffffffff;
  local_58 = KEMDLBKINAD;
  str1 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
                    /* try { // try from 0360ae18 to 0370ae1f has its CatchHandler @ 0360af7c */
  pSVar4 = System_String__Concat(pSVar4,str1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0360ae34 to 0370ae3b has its CatchHandler @ 0360af78 */
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  bVar1 = FKDLCJJOGIP__PMINMFLPJCB(__this,method_00);
  if (bVar1) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = MGNPHCAAEIO__PKNDHONBNIF((MethodInfo *)0x0);
    if (bVar1) {
      if ((__this->fields)._OHFODMIBJME_k__BackingField == false) {
                    /* try { // try from 0360ae7c to 0370ae9f has its CatchHandler @ 0360af6c */
        pNVar5 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar5 != (NDPMLPGANCI_o *)0x0) {
                    /* try { // try from 0360aea0 to 0370af5b has its CatchHandler @ 0360ac34 */
          NDPMLPGANCI__PHFCKPKDMBK(pNVar5,(__this->fields).KOMAKPPBFEM != 1,true,(MethodInfo *)0x0);
          (__this->fields)._OHFODMIBJME_k__BackingField = true;
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          if (__this_00 != (JMDPBFOCHHP_o *)0x0) {
            JMDPBFOCHHP__GIENGNEGHPJ(__this_00,(MethodInfo *)0x0);
            return;
          }
        }
LAB_0360afe0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    else {
                    /* try { // try from 0360af8c to 0370af8f has its CatchHandler @ 0360afb4 */
                    /* try { // try from 0360af90 to 0370afbb has its CatchHandler @ 0360ac34 */
      if ((__this->fields).KOMAKPPBFEM != 1) {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        MGNPHCAAEIO__OIPLCHEIFNJ((MethodInfo *)0x0);
      }
                    /* catch() { ... } // from try @ 0360af8c with catch @ 0360afb4 */
      __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if (__this_01 == (KKLJIDJBFEI_o *)0x0) goto LAB_0360afe0;
                    /* try { // try from 0360afbc to 0370afc3 has its CatchHandler @ 0360afd8 */
      KKLJIDJBFEI__FHIODBIPGBG(__this_01,(MethodInfo *)0x0);
    }
  }
  else {
    pNVar5 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar5 == (NDPMLPGANCI_o *)0x0) goto LAB_0360afe0;
    NDPMLPGANCI__PHFCKPKDMBK(pNVar5,false,true,(MethodInfo *)0x0);
    if ((__this->fields)._OHFODMIBJME_k__BackingField != false) {
      FKDLCJJOGIP__JDLNMHBDBJK(__this,method_01);
      FKDLCJJOGIP__EHCGDODIIGF(__this,method_02);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4037,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_38,(MethodInfo *)0x0
                );
                    /* try { // try from 0360af5c to 0370af5f has its CatchHandler @ 0360af70 */
                    /* try { // try from 0360af60 to 0370af67 has its CatchHandler @ 0360af74 */
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0360af68 to 0370af8b has its CatchHandler @ 0360ac34 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360ae7c with catch @ 0360af6c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360af5c with catch @ 0360af70
                        */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360af60 with catch @ 0360af74
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360ae34 with catch @ 0360af78
                        */
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360ae18 with catch @ 0360af7c
                        */
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
    }
  }
                    /* try { // try from 0360afc4 to 0370afcf has its CatchHandler @ 0360ac34 */
                    /* try { // try from 0360afd0 to 0370afd7 has its CatchHandler @ 0360afd8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0360afbc with catch @ 0360afd8
                       catch(type#2 @ 00000000) { ... } // from try @ 0360afd0 with catch @ 0360afd8
                        */
  return;
}

