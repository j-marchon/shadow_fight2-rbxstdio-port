// TypeDefIndex 1507
// Namespace: 
// public static class KOKJOMBFNCD
// Fields:
//   private static Application.LogCallback LBHLJBEDMMP; // 0x0
//   private static bool <JAIDNCGGKNI>k__BackingField; // 0x8
//   private static readonly KCCMMLBMGMO OGNPGJGNGNF; // 0x10

// ===== public static void BIGBBPBIECF(Application.LogCallback CJNHFNHJHPE)  [RVA 0x319E29C]
// KOKJOMBFNCD$$BIGBBPBIECF @ RVA 0x319E29C

void KOKJOMBFNCD__BIGBBPBIECF(UnityEngine_Application_LogCallback_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  UnityEngine_Application_LogCallback_o *pUVar3;
  MethodInfo *extraout_x1;
  UnityEngine_Application_LogCallback_o *source;
  
  if ((DAT_04566ac8 & 1) == 0) {
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_LogCallback_TypeInfo);
    DAT_04566ac8 = 1;
    method = extraout_x1;
  }
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KOKJOMBFNCD_TypeInfo,method);
  }
  source = KOKJOMBFNCD_TypeInfo->static_fields->LBHLJBEDMMP;
  do {
    pSVar2 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((UnityEngine_Application_LogCallback_c *)pSVar2->klass !=
          UnityEngine_Application_LogCallback_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar3 = (UnityEngine_Application_LogCallback_o *)
             FUN_01c07368(KOKJOMBFNCD_TypeInfo->static_fields,pSVar2,source);
    bVar1 = source != pUVar3;
    source = pUVar3;
  } while (bVar1);
  return;
}


// ===== public static bool FHEGNJFGHMA()  [RVA 0x319E374]
// KOKJOMBFNCD$$FHEGNJFGHMA @ RVA 0x319E374

bool KOKJOMBFNCD__FHEGNJFGHMA(MethodInfo *method)

{
  if ((DAT_04566ac9 & 1) == 0) {
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    DAT_04566ac9 = 1;
  }
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return KOKJOMBFNCD_TypeInfo->static_fields->_JAIDNCGGKNI_k__BackingField;
}


// ===== private static void EKLNCAHPGMC(string HCPBLAONAAA, string HLHFHPEGMJL, LogType HDJJLOJPNLE)  [RVA 0x319E3CC]
// KOKJOMBFNCD$$EKLNCAHPGMC @ RVA 0x319E3CC

void KOKJOMBFNCD__EKLNCAHPGMC
               (System_String_o *HCPBLAONAAA,System_String_o *HLHFHPEGMJL,int32_t HDJJLOJPNLE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KOKJOMBFNCD_StaticFields *pKVar3;
  KCCMMLBMGMO_c *pKVar4;
  UnityEngine_Application_LogCallback_o *pUVar5;
  ulong uVar6;
  int32_t *piVar7;
  KCCMMLBMGMO_o *pKVar8;
  int32_t local_2c;
  System_String_o *local_28;
  System_String_o *local_18;
  
  local_2c = HDJJLOJPNLE;
  local_28 = HLHFHPEGMJL;
  local_18 = HCPBLAONAAA;
  if ((DAT_04566aca & 1) == 0) {
    FUN_01bab630(&KCCMMLBMGMO_TypeInfo);
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    DAT_04566aca = 1;
  }
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566bb3 == '\0') {
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    DAT_04566bb3 = '\x01';
  }
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar3 = KOKJOMBFNCD_TypeInfo->static_fields;
  if (pKVar3->_JAIDNCGGKNI_k__BackingField != false) {
    if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pKVar3 = KOKJOMBFNCD_TypeInfo->static_fields;
    }
    pKVar8 = pKVar3->OGNPGJGNGNF;
    if (pKVar8 != (KCCMMLBMGMO_o *)0x0) {
      if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pKVar8 = KOKJOMBFNCD_TypeInfo->static_fields->OGNPGJGNGNF;
        if (pKVar8 == (KCCMMLBMGMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      pKVar4 = pKVar8->klass;
      uVar1._0_1_ = (pKVar4->_2).rank;
      uVar1._1_1_ = (pKVar4->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pKVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)KCCMMLBMGMO_TypeInfo) {
            pVVar2 = pKVar4->vtable + *piVar7;
            goto LAB_0329e4f0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar8,KCCMMLBMGMO_TypeInfo,0);
LAB_0329e4f0:
      (*pVVar2->methodPtr)(pKVar8,&local_18,&local_28,&local_2c,pVVar2->method);
    }
  }
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar5 = KOKJOMBFNCD_TypeInfo->static_fields->LBHLJBEDMMP;
  if (pUVar5 != (UnityEngine_Application_LogCallback_o *)0x0) {
    (*(code *)(pUVar5->fields).super.super.invoke_impl)
              ((pUVar5->fields).super.super.method_code,local_18,local_28,local_2c,
               (pUVar5->fields).super.super.method);
  }
  return;
}


// ===== private static KCCMMLBMGMO EEKJHMDPNLJ()  [RVA 0x319E558]
// KOKJOMBFNCD$$EEKJHMDPNLJ @ RVA 0x319E558

KCCMMLBMGMO_o * KOKJOMBFNCD__EEKJHMDPNLJ(MethodInfo *method)

{
  KCCMMLBMGMO_o *__this;
  
  if ((DAT_04566acb & 1) == 0) {
    FUN_01bab630(&IMMKOOIOKJB_TypeInfo);
    DAT_04566acb = 1;
  }
  __this = (KCCMMLBMGMO_o *)thunk_FUN_01bda818(IMMKOOIOKJB_TypeInfo);
  IMMKOOIOKJB___ctor((IMMKOOIOKJB_o *)__this,(MethodInfo *)0x0);
  return __this;
}


// ===== public static void HBLDNIKHJAB(Application.LogCallback CJNHFNHJHPE)  [RVA 0x319E5AC]
// KOKJOMBFNCD$$HBLDNIKHJAB @ RVA 0x319E5AC

void KOKJOMBFNCD__HBLDNIKHJAB(UnityEngine_Application_LogCallback_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  UnityEngine_Application_LogCallback_o *pUVar3;
  MethodInfo *extraout_x1;
  UnityEngine_Application_LogCallback_o *a;
  
  if ((DAT_04566acc & 1) == 0) {
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_LogCallback_TypeInfo);
    DAT_04566acc = 1;
    method = extraout_x1;
  }
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KOKJOMBFNCD_TypeInfo,method);
  }
  a = KOKJOMBFNCD_TypeInfo->static_fields->LBHLJBEDMMP;
  do {
    pSVar2 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((UnityEngine_Application_LogCallback_c *)pSVar2->klass !=
          UnityEngine_Application_LogCallback_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar3 = (UnityEngine_Application_LogCallback_o *)
             FUN_01c07368(KOKJOMBFNCD_TypeInfo->static_fields,pSVar2,a);
    bVar1 = a != pUVar3;
    a = pUVar3;
  } while (bVar1);
  return;
}


// ===== public static void DMCIPJBHCNE(bool CJNHFNHJHPE)  [RVA 0x319E684]
// KOKJOMBFNCD$$DMCIPJBHCNE @ RVA 0x319E684

void KOKJOMBFNCD__DMCIPJBHCNE(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566acd & 1) == 0) {
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    DAT_04566acd = 1;
    method = extraout_x1;
  }
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KOKJOMBFNCD_TypeInfo,method);
  }
  KOKJOMBFNCD_TypeInfo->static_fields->_JAIDNCGGKNI_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private static void .cctor()  [RVA 0x319E6E4]
// KOKJOMBFNCD$$.cctor @ RVA 0x319E6E4

void KOKJOMBFNCD___cctor(MethodInfo *method)

{
  UnityEngine_Application_LogCallback_o *value;
  MethodInfo *method_00;
  KCCMMLBMGMO_o *pKVar1;
  KCCMMLBMGMO_o **ppKVar2;
  
  if ((DAT_04566ace & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_KOKJOMBFNCD_EKLNCAHPGMC__);
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_LogCallback_TypeInfo);
    DAT_04566ace = 1;
  }
  KOKJOMBFNCD_TypeInfo->static_fields->_JAIDNCGGKNI_k__BackingField = true;
  value = (UnityEngine_Application_LogCallback_o *)
          thunk_FUN_01bda818(UnityEngine_Application_LogCallback_TypeInfo);
  UnityEngine_Application_LogCallback___ctor();
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Application__add_logMessageReceived(value,(MethodInfo *)0x0);
  pKVar1 = KOKJOMBFNCD__EEKJHMDPNLJ(method_00);
  ppKVar2 = &KOKJOMBFNCD_TypeInfo->static_fields->OGNPGJGNGNF;
  *ppKVar2 = pKVar1;
  thunk_FUN_01c20e04(ppKVar2,pKVar1);
  return;
}

