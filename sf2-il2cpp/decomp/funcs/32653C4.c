// BDGDJDGHMJI$$MHGOCDEIGLJ @ RVA 0x32653C4

/* WARNING: Type propagation algorithm not settling */

System_String_o * BDGDJDGHMJI__MHGOCDEIGLJ(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *b;
  JMDPBFOCHHP_o *pJVar6;
  EGMONPGHHDP_o *pEVar7;
  JMDPBFOCHHP_CKEMIAEPGKD_array *pJVar8;
  EGMONPGHHDP_o *__this;
  MethodInfo *str0;
  MethodInfo *method_00;
  System_RuntimeFieldHandle_Fields *pSVar9;
  JMDPBFOCHHP_CKEMIAEPGKD_o *CLDEGLBDGGE;
  
  if ((DAT_045671c5 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5586);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5587);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5588);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5589);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5590);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5591);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5592);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5593);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5594);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5595);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5596);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5597);
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045671c5 = 1;
  }
  if (BFPCMHPBAGL == (System_String_array *)0x0) goto LAB_033657a4;
  if (BFPCMHPBAGL->max_length == 0) {
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5586,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar9 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5587;
LAB_033656a4:
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar9->value,(MethodInfo *)0x0
              );
    str0 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    method_00 = str0;
    if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (MethodInfo *)thunk_FUN_01ba7564(BDGDJDGHMJI_TypeInfo);
    }
    pSVar3 = BDGDJDGHMJI__HDDPPDKDAKG(method_00);
    pSVar3 = System_String__Concat((System_String_o *)str0,pSVar3,(MethodInfo *)0x0);
    return pSVar3;
  }
  if ((int)BFPCMHPBAGL->max_length == 0) {
LAB_033657a8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  if (BFPCMHPBAGL->m_Items[0] != (System_String_o *)0x0) {
    pSVar3 = System_String__ToLower(BFPCMHPBAGL->m_Items[0],(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5588,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5589,(MethodInfo *)0x0)
    ;
    b = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar3,b,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5596,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar9 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5597;
      goto LAB_033656a4;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (pJVar6 != (JMDPBFOCHHP_o *)0x0) {
      if ((pJVar6->fields)._NFFDCNIMBHK_k__BackingField == (JMDPBFOCHHP_JMEJFGKJNEA_o *)0x0) {
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5590,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar9 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5591;
        goto LAB_0336573c;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar7 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
      if ((pEVar7 != (EGMONPGHHDP_o *)0x0) &&
         (pJVar8 = EGMONPGHHDP__BILAAEOFDBJ(pEVar7,(MethodInfo *)0x0),
         pJVar8 != (JMDPBFOCHHP_CKEMIAEPGKD_array *)0x0)) {
        if ((uint)pJVar8->max_length < 2) goto LAB_033657a8;
        CLDEGLBDGGE = pJVar8->m_Items[1];
        if ((CLDEGLBDGGE == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) &&
           (CLDEGLBDGGE = pJVar8->m_Items[0], CLDEGLBDGGE == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0)) {
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5592,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar9 = (System_RuntimeFieldHandle_Fields *)
                   &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5593;
LAB_0336573c:
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar9->value,
                     (MethodInfo *)0x0);
          pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          return pSVar3;
        }
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar7 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
        __this = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
        if (__this != (EGMONPGHHDP_o *)0x0) {
          iVar2 = EGMONPGHHDP__AKDNGOBCGHB(__this,CLDEGLBDGGE,(MethodInfo *)0x0);
          if (pEVar7 != (EGMONPGHHDP_o *)0x0) {
            EGMONPGHHDP__LJAGKBMCPGO(pEVar7,iVar2 + 1,true,(MethodInfo *)0x0);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5594,
                       (MethodInfo *)0x0);
            pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            pSVar9 = (System_RuntimeFieldHandle_Fields *)
                     &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5595;
            goto LAB_0336573c;
          }
        }
      }
    }
  }
LAB_033657a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

