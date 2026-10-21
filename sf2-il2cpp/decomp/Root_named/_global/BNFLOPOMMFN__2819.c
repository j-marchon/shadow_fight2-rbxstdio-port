// TypeDefIndex 2819
// Namespace: 
// public class BNFLOPOMMFN : OHPOFOPJIMB
// Fields:

// ===== public void .ctor()  [RVA 0x34256F8]
// BNFLOPOMMFN$$.ctor @ RVA 0x34256F8

void BNFLOPOMMFN___ctor(BNFLOPOMMFN_o *__this,MethodInfo *method)

{
  OHPOFOPJIMB___ctor((OHPOFOPJIMB_o *)__this,2,0,(MethodInfo *)0x0);
  return;
}


// ===== public override bool BNNIDPDMOIL()  [RVA 0x3425708]
// BNFLOPOMMFN$$BNNIDPDMOIL @ RVA 0x3425708

bool BNFLOPOMMFN__BNNIDPDMOIL(BNFLOPOMMFN_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NDPMLPGANCI_o *__this_00;
  DialogsManager_o *pGVar3;
  RaidManager_o *pCVar4;
  
  if ((DAT_04568105 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseDialog>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568105 = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    iVar2 = NDPMLPGANCI__FFIOCEOHPEM(__this_00,(MethodInfo *)0x0);
    pGVar3 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pGVar3 != (DialogsManager_o *)0x0) {
      bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(pGVar3->fields).IMMJEIGBAAC,
                         Method_DJNBJHPDKDP_OBECCOPBADO<BaseDialog>__);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      pCVar4 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (pCVar4 != (RaidManager_o *)0x0) {
        return (iVar2 == 5 && bVar1) && (pCVar4->fields).BLELLCNDBHN != false;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void IKDPMKOIDMP()  [RVA 0x34257CC]
// BNFLOPOMMFN$$IKDPMKOIDMP @ RVA 0x34257CC

void BNFLOPOMMFN__IKDPMKOIDMP(BNFLOPOMMFN_o *__this,MethodInfo *method)

{
  RaidClansManager_o *pEVar1;
  ClanRaidsController_o *pCVar2;
  NLFLMJPNOLF_o *NLOFDAJCIML;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568106 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568106 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if ((pEVar1 != (RaidClansManager_o *)0x0) &&
     (pCVar2 = (pEVar1->fields).GMNJEBCECDA, pCVar2 != (ClanRaidsController_o *)0x0)) {
    ClanRaidsController__HOMIFFIACAC(pCVar2,(MethodInfo *)0x0);
    pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    if ((pEVar1 != (RaidClansManager_o *)0x0) &&
       (pCVar2 = (pEVar1->fields).GMNJEBCECDA, pCVar2 != (ClanRaidsController_o *)0x0)) {
      NLOFDAJCIML = ClanRaidsController__PCKHIBMJKJG(pCVar2,(MethodInfo *)0x0);
      if ((NLOFDAJCIML != (NLFLMJPNOLF_o *)0x0) && ((NLOFDAJCIML->fields).BHAOPCFDKCG == false)) {
        DialogsOpener__LKDGKEJFPLL(NLOFDAJCIML,(MethodInfo *)0x0);
      }
      OHPOFOPJIMB__FGNINNOOCCL((OHPOFOPJIMB_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

