// TypeDefIndex 3301
// Namespace: 
// public class HIJLPKACNPD : CNOGBOOJFIP
// Fields:
//   private readonly EINKKMIHCHI KAKIHIMNDAE; // 0x10
//   private readonly OCHIFKHFMAC KJEANMHKEDC; // 0x18

// ===== public void .ctor(NHJCFGACFDF EMIJCAIFDML, OCHIFKHFMAC EIHGMMBMDDO)  [RVA 0x35206C8]
// HIJLPKACNPD$$.ctor @ RVA 0x35206C8

void HIJLPKACNPD___ctor(HIJLPKACNPD_o *__this,NHJCFGACFDF_o *EMIJCAIFDML,OCHIFKHFMAC_o *EIHGMMBMDDO,
                       MethodInfo *method)

{
  OCHIFKHFMAC_o **ppOVar1;
  EINKKMIHCHI_o *pEVar2;
  
  if ((DAT_045689b6 & 1) == 0) {
    FUN_01bab630(&Method_NHJCFGACFDF_LDLFKOJJGLG<EINKKMIHCHI>__);
    DAT_045689b6 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppOVar1 = &(__this->fields).KJEANMHKEDC;
  *ppOVar1 = EIHGMMBMDDO;
  thunk_FUN_01c20e04(ppOVar1,EIHGMMBMDDO);
  if (EMIJCAIFDML != (NHJCFGACFDF_o *)0x0) {
    pEVar2 = (EINKKMIHCHI_o *)
             NHJCFGACFDF__LDLFKOJJGLG<object>
                       (EMIJCAIFDML,Method_NHJCFGACFDF_LDLFKOJJGLG<EINKKMIHCHI>__);
    (__this->fields).KAKIHIMNDAE = pEVar2;
    thunk_FUN_01c20e04(&__this->fields,pEVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EFDDFOMAEPK(Action<bool> BLMFLPJJMPF)  [RVA 0x3520754]
// HIJLPKACNPD$$EFDDFOMAEPK @ RVA 0x3520754

void HIJLPKACNPD__EFDDFOMAEPK
               (HIJLPKACNPD_o *__this,System_Action_bool__o *BLMFLPJJMPF,MethodInfo *method)

{
  System_String_o *PCPECHHMLEC;
  System_String_o *KHPLLCKLJKO;
  System_String_o *EHNFGMGKCHO;
  System_String_o *KCFLBKINDFM;
  HIJLPKACNPD_FADKADAEDJM_o *__this_00;
  System_Action_bool__o **ppSVar1;
  Il2CppObject *pIVar2;
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *in_x3;
  OCHIFKHFMAC_o *pOVar3;
  Il2CppClass *pIVar4;
  
  if ((DAT_045689b7 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_HIJLPKACNPD_FADKADAEDJM_CGEIBLPLJGH__);
    FUN_01bab630(&HIJLPKACNPD_FADKADAEDJM_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<GooglePlayEmailScopeResolverConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&StringLiteral_11321/*"Resolve email scope started."*/);
    FUN_01bab630(&StringLiteral_17997/*"email scope already granted"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045689b7 = 1;
  }
  __this_00 = (HIJLPKACNPD_FADKADAEDJM_o *)thunk_FUN_01bda818(HIJLPKACNPD_FADKADAEDJM_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (HIJLPKACNPD_FADKADAEDJM_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    thunk_FUN_01c20e04(&__this_00->fields,__this);
    ppSVar1 = &(__this_00->fields).callback;
    *ppSVar1 = BLMFLPJJMPF;
    thunk_FUN_01c20e04(ppSVar1,BLMFLPJJMPF);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_11321/*"Resolve email scope started."*/,(MethodInfo *)0x0);
    pOVar3 = (__this->fields).KJEANMHKEDC;
    if (pOVar3 != (OCHIFKHFMAC_o *)0x0) {
      if ((pOVar3->fields)._GOJOEOMCBFI_k__BackingField != false) {
        HIJLPKACNPD_FADKADAEDJM__KGGNIOMMILG(__this_00,true,StringLiteral_17997/*"email scope already granted"*/,in_x3);
        return;
      }
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar2 = IFAMAAGNCBJ__GPBMELHDADN<object>
                         (Method_IFAMAAGNCBJ_GPBMELHDADN<GooglePlayEmailScopeResolverConfig>__);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (pIVar4 = pIVar2[1].klass, pIVar4 != (Il2CppClass *)0x0)) {
        PCPECHHMLEC = (System_String_o *)(pIVar4->_1).name;
        EHNFGMGKCHO = (System_String_o *)(pIVar4->_1).namespaze;
        KHPLLCKLJKO = (pIVar4->_1).byval_arg.data;
        KCFLBKINDFM = *(System_String_o **)&(pIVar4->_1).byval_arg.bits;
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        DialogsOpener__JNDPLPKDPCP
                  (PCPECHHMLEC,EHNFGMGKCHO,KCFLBKINDFM,KHPLLCKLJKO,IELDNEAAPBE,2,5,false,false,
                   StringLiteral_1/*""*/,true,true,true,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

