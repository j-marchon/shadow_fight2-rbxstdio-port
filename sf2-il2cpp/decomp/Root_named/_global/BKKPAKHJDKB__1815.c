// TypeDefIndex 1815
// Namespace: 
// public class BKKPAKHJDKB
// Fields:
//   public RaidPaymentService.JMKJIJBLDGM HHJIJKJCEOF; // 0x10
//   public string EAHLGGCMKJN; // 0x18
//   public string FBNFLPPPEFL; // 0x20
//   public FAIJGJCCKJC IJDPHADMDKN; // 0x28
//   public BECIPDJBAOG EBJBJCPBFLE; // 0x30
//   private Action<BKKPAKHJDKB> IDLOEOMGHOO; // 0x38
//   public bool GNOICOBBOME; // 0x40

// ===== public override string ToString()  [RVA 0x321A0D4]
// BKKPAKHJDKB$$ToString @ RVA 0x321A0D4

System_String_o * BKKPAKHJDKB__ToString(BKKPAKHJDKB_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_Object_array *args;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  System_String_o *pSVar4;
  int32_t local_34;
  
  if ((DAT_04566ef4 & 1) == 0) {
    FUN_01bab630(&RaidPaymentService_JMKJIJBLDGM_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1172/*", RaidItemPackItemInfo:PaymentItem,\n"*/);
    FUN_01bab630(&StringLiteral_4932/*"CurrencyName:"*/);
    FUN_01bab630(&StringLiteral_22419/*"{0}:{1}, {2}:{3},\n"*/);
    FUN_01bab630(&StringLiteral_22417/*"{0}:{1}"*/);
    FUN_01bab630(&StringLiteral_10080/*"Packname"*/);
    FUN_01bab630(&StringLiteral_12396/*"Status"*/);
    FUN_01bab630(&StringLiteral_8669/*"Loot"*/);
    DAT_04566ef4 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  if (args == (System_Object_array *)0x0) {
LAB_0331a3d4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (StringLiteral_10080/*"Packname"*/ == (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
  }
  else {
    lVar1 = thunk_FUN_01bda71c(StringLiteral_10080/*"Packname"*/,(((args->obj).klass)->_1).element_class);
    pIVar2 = StringLiteral_10080/*"Packname"*/;
    if (lVar1 == 0) goto LAB_0331a3c8;
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar2;
    thunk_FUN_01c20e04();
    pSVar4 = (__this->fields).EAHLGGCMKJN;
    if ((pSVar4 != (System_String_o *)0x0) &&
       (lVar1 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar1 == 0)) {
LAB_0331a3c8:
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pSVar4;
      thunk_FUN_01c20e04(args->m_Items + 1,pSVar4);
      if (StringLiteral_12396/*"Status"*/ == (Il2CppObject *)0x0) {
        pIVar2 = (Il2CppObject *)0x0;
      }
      else {
        lVar1 = thunk_FUN_01bda71c(StringLiteral_12396/*"Status"*/,(((args->obj).klass)->_1).element_class);
        pIVar2 = StringLiteral_12396/*"Status"*/;
        if (lVar1 == 0) goto LAB_0331a3c8;
      }
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar2;
        thunk_FUN_01c20e04();
        local_34 = (__this->fields).HHJIJKJCEOF;
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(RaidPaymentService_JMKJIJBLDGM_TypeInfo,&local_34);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0))
        goto LAB_0331a3c8;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar2);
          pSVar4 = System_String__Format(StringLiteral_22419/*"{0}:{1}, {2}:{3},\n"*/,args,(MethodInfo *)0x0);
          if (values == (System_String_array *)0x0) goto LAB_0331a3d4;
          if ((int)values->max_length != 0) {
            values->m_Items[0] = pSVar4;
            thunk_FUN_01c20e04(values->m_Items,pSVar4);
            if (1 < (uint)values->max_length) {
              values->m_Items[1] = StringLiteral_4932/*"CurrencyName:"*/;
              thunk_FUN_01c20e04(values->m_Items + 1);
              if (2 < (uint)values->max_length) {
                values->m_Items[2] = (__this->fields).FBNFLPPPEFL;
                thunk_FUN_01c20e04(values->m_Items + 2);
                if (3 < (uint)values->max_length) {
                  values->m_Items[3] = StringLiteral_1172/*", RaidItemPackItemInfo:PaymentItem,\n"*/;
                  thunk_FUN_01c20e04(values->m_Items + 3);
                  pSVar4 = System_String__Format
                                     (StringLiteral_22417/*"{0}:{1}"*/,StringLiteral_8669/*"Loot"*/,
                                      (Il2CppObject *)(__this->fields).EBJBJCPBFLE,(MethodInfo *)0x0
                                     );
                  if (4 < (uint)values->max_length) {
                    values->m_Items[4] = pSVar4;
                    thunk_FUN_01c20e04();
                    pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
                    return pSVar4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void .ctor()  [RVA 0x321A3D8]
// BKKPAKHJDKB$$.ctor @ RVA 0x321A3D8

void BKKPAKHJDKB___ctor(BKKPAKHJDKB_o *__this,MethodInfo *method)

{
  System_Action_BKKPAKHJDKB__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_BKKPAKHJDKB__o *pSVar2;
  
  if ((DAT_04566ef5 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&Method_BKKPAKHJDKB_<>c_IMCLGPNHPEG__);
    FUN_01bab630(&BKKPAKHJDKB_<>c_TypeInfo);
    DAT_04566ef5 = 1;
    method = extraout_x1;
  }
  if ((BKKPAKHJDKB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BKKPAKHJDKB_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = BKKPAKHJDKB_<>c_TypeInfo->static_fields->__9__9_0;
  if (pSVar2 == (System_Action_BKKPAKHJDKB__o *)0x0) {
    if ((BKKPAKHJDKB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(BKKPAKHJDKB_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_BKKPAKHJDKB__o *)thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &BKKPAKHJDKB_<>c_TypeInfo->static_fields->__9__9_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (BKKPAKHJDKB_o *)0x0) {
    ppSVar1 = &(__this->fields).IDLOEOMGHOO;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).HHJIJKJCEOF = -1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FGNINNOOCCL()  [RVA 0x321A4DC]
// BKKPAKHJDKB$$FGNINNOOCCL @ RVA 0x321A4DC

void BKKPAKHJDKB__FGNINNOOCCL(BKKPAKHJDKB_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  DNELIPCHKLK_o *pDVar2;
  System_String_o *pSVar3;
  FAIJGJCCKJC_o *pFVar4;
  System_Action_BKKPAKHJDKB__o *pSVar5;
  DNELIPCHKLK_o **ppDVar6;
  DNELIPCHKLK_o *pDVar7;
  PKHMIGFEJCL_o *pPVar8;
  
  if ((DAT_04566ef6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566ef6 = 1;
  }
  if ((__this->fields).HHJIJKJCEOF == 0) {
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar1 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
       (pPVar8 = (pNVar1->fields).QuestParameters, pPVar8 == (PKHMIGFEJCL_o *)0x0))
    goto LAB_0331a5d0;
    ppDVar6 = &(pPVar8->fields).NMHCLFFOMJH;
    pDVar7 = *ppDVar6;
    pDVar2 = DNELIPCHKLK__OBECCOPBADO((MethodInfo *)0x0);
    *ppDVar6 = pDVar2;
    thunk_FUN_01c20e04(ppDVar6,pDVar2);
    (pPVar8->fields).PNPKEKHEMCD = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04();
    pFVar4 = (__this->fields).IJDPHADMDKN;
    if (pFVar4 == (FAIJGJCCKJC_o *)0x0) {
      pSVar3 = (System_String_o *)0x0;
    }
    else {
      pSVar3 = (pFVar4->fields).super._COIPKAKHDFP_k__BackingField;
    }
    (pPVar8->fields).LJMELPHJPOG = pSVar3;
    thunk_FUN_01c20e04(&(pPVar8->fields).LJMELPHJPOG);
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar1 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_0331a5d0;
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar1,0x33,(MethodInfo *)0x0);
    *ppDVar6 = pDVar7;
    thunk_FUN_01c20e04(ppDVar6,pDVar7);
  }
  pSVar5 = (__this->fields).IDLOEOMGHOO;
  if (pSVar5 != (System_Action_BKKPAKHJDKB__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0331a5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar5->fields).super.super.invoke_impl)
              ((pSVar5->fields).super.super.method_code,__this,(pSVar5->fields).super.super.method);
    return;
  }
LAB_0331a5d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GJBEKFJCBOD(Action<BKKPAKHJDKB> CJNHFNHJHPE)  [RVA 0x321A5D4]
// BKKPAKHJDKB$$GJBEKFJCBOD @ RVA 0x321A5D4

void BKKPAKHJDKB__GJBEKFJCBOD
               (BKKPAKHJDKB_o *__this,System_Action_BKKPAKHJDKB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_BKKPAKHJDKB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_BKKPAKHJDKB__o *pSVar5;
  System_Action_BKKPAKHJDKB__o **ppSVar6;
  System_Action_BKKPAKHJDKB__o *a;
  
  if ((DAT_04566ef7 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    DAT_04566ef7 = 1;
  }
  ppSVar6 = &(__this->fields).IDLOEOMGHOO;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<BKKPAKHJDKB>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BKKPAKHJDKB>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_BKKPAKHJDKB__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void JHHAAJFPAJD(Action<BKKPAKHJDKB> CJNHFNHJHPE)  [RVA 0x321A684]
// BKKPAKHJDKB$$JHHAAJFPAJD @ RVA 0x321A684

void BKKPAKHJDKB__JHHAAJFPAJD
               (BKKPAKHJDKB_o *__this,System_Action_BKKPAKHJDKB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_BKKPAKHJDKB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_BKKPAKHJDKB__o *pSVar5;
  System_Action_BKKPAKHJDKB__o **ppSVar6;
  System_Action_BKKPAKHJDKB__o *source;
  
  if ((DAT_04566ef8 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    DAT_04566ef8 = 1;
  }
  ppSVar6 = &(__this->fields).IDLOEOMGHOO;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<BKKPAKHJDKB>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<BKKPAKHJDKB>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_BKKPAKHJDKB__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

