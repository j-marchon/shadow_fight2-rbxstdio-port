// TypeDefIndex 29
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class ClanBaseDialog : RaidBaseDialog
// Fields:

// ===== protected virtual void DFGEGIMMCFG(long PEJIFIIDFMM)  [RVA 0x2FF680C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanBaseDialog$$DFGEGIMMCFG @ RVA 0x2FF680C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__DFGEGIMMCFG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *__this,int64_t PEJIFIIDFMM,
               MethodInfo *method)

{
  return;
}


// ===== protected virtual void LPOJCPKJIKF(long PEJIFIIDFMM)  [RVA 0x2FF6810]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanBaseDialog$$LPOJCPKJIKF @ RVA 0x2FF6810

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__LPOJCPKJIKF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *__this,int64_t PEJIFIIDFMM,
               MethodInfo *method)

{
  return;
}


// ===== private void OIHOMNDJOMI(long PEJIFIIDFMM)  [RVA 0x2FF6814]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanBaseDialog$$OIHOMNDJOMI @ RVA 0x2FF6814

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__OIHOMNDJOMI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *__this,int64_t PEJIFIIDFMM,
               MethodInfo *method)

{
  PlayerData_o *__this_00;
  int64_t iVar1;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_c *pNVar2;
  
  if ((DAT_04565aa2 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565aa2 = 1;
  }
  if ((__this->fields).super.super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (PlayerData_o *)0x0) {
    iVar1 = PlayerData__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
    pNVar2 = __this->klass;
    if (iVar1 == PEJIFIIDFMM) {
      (*(pNVar2->vtable)._36_DNDPMHKMMAB.methodPtr)
                (__this,PEJIFIIDFMM,(pNVar2->vtable)._36_DNDPMHKMMAB.method);
                    /* catch() { ... } // from try @ 030f68e0 with catch @ 030f68b8
                       catch() { ... } // from try @ 030f6910 with catch @ 030f68b8
                       catch() { ... } // from try @ 030f694c with catch @ 030f68b8 */
                    /* WARNING: Could not recover jumptable at 0x030f68bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._20_Close.methodPtr)
                (__this,(__this->klass->vtable)._20_Close.method);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x030f68d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar2->vtable)._38_CKIGEFAKKDJ.methodPtr)
              (__this,PEJIFIIDFMM,(pNVar2->vtable)._38_CKIGEFAKKDJ.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 030f68dc to 031f68df has its CatchHandler @ 030f68f4 */
  FUN_01bab8c8();
}


// ===== protected override void GIENGNEGHPJ(string PCPECHHMLEC = "", string DOEJEADIJEJ = "OK", string BECCMDCHEOP = "CANCEL", BaseDialog.OFBBBIDKKOD JFLAKNAGBEL = 0)  [RVA 0x2FF68E0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanBaseDialog$$GIENGNEGHPJ @ RVA 0x2FF68E0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__GIENGNEGHPJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *__this,
               System_String_o *PCPECHHMLEC,System_String_o *DOEJEADIJEJ,
               System_String_o *BECCMDCHEOP,int32_t JFLAKNAGBEL,MethodInfo *method)

{
  RaidClansManager_o *pEVar1;
  System_Action_long__o *pSVar2;
  System_Action_MGDJPGGPDJI__o *CJNHFNHJHPE;
  
                    /* try { // try from 030f68e0 to 031f690b has its CatchHandler @ 030f68b8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f68dc with catch @ 030f68f4
                        */
                    /* try { // try from 030f690c to 031f690f has its CatchHandler @ 030f693c */
                    /* try { // try from 030f6910 to 031f693f has its CatchHandler @ 030f68b8 */
  if ((DAT_04565aa3 & 1) == 0) {
    FUN_01bab630(&System_Action<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Action<long>_TypeInfo);
                    /* catch() { ... } // from try @ 030f690c with catch @ 030f693c */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_EPFNDIJOAKH__);
                    /* try { // try from 030f6940 to 031f694b has its CatchHandler @ 030f6960 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_LCKKFPIKJJH__);
                    /* try { // try from 030f694c to 031f6957 has its CatchHandler @ 030f68b8 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_OIHOMNDJOMI__);
                    /* try { // try from 030f6958 to 031f695f has its CatchHandler @ 030f6960 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f6940 with catch @ 030f6960
                       catch(type#2 @ 00000000) { ... } // from try @ 030f6958 with catch @ 030f6960
                        */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 030f6964 to 031f69b7 has its CatchHandler @ 030f6964
                       catch() { ... } // from try @ 030f6964 with catch @ 030f6964
                       catch() { ... } // from try @ 030f6a18 with catch @ 030f6964
                       catch() { ... } // from try @ 030f6a80 with catch @ 030f6964
                       catch() { ... } // from try @ 030f6a90 with catch @ 030f6964
                       catch() { ... } // from try @ 030f6ae4 with catch @ 030f6964 */
    DAT_04565aa3 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,PCPECHHMLEC,DOEJEADIJEJ,
             BECCMDCHEOP,JFLAKNAGBEL,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    /* try { // try from 030f69b8 to 031f69c7 has its CatchHandler @ 030f6a90 */
  pSVar2 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
  System_Action<long>___ctor();
  if (pEVar1 != (RaidClansManager_o *)0x0) {
                    /* try { // try from 030f69ec to 031f69f7 has its CatchHandler @ 030f6a9c */
    RaidClansManager__DLOJCINMBIO(pEVar1,pSVar2,(MethodInfo *)0x0);
    pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    /* try { // try from 030f69fc to 031f6a07 has its CatchHandler @ 030f6aa0 */
    pSVar2 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
                    /* try { // try from 030f6a14 to 031f6a17 has its CatchHandler @ 030f6aa4 */
                    /* try { // try from 030f6a18 to 031f6a7b has its CatchHandler @ 030f6964 */
    System_Action<long>___ctor();
    if (pEVar1 != (RaidClansManager_o *)0x0) {
      RaidClansManager__IDLCMDGPIBL(pEVar1,pSVar2,(MethodInfo *)0x0);
      pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_MGDJPGGPDJI__o *)
                    thunk_FUN_01bda818(System_Action<MGDJPGGPDJI>_TypeInfo);
      System_Action<object>___ctor();
      if (pEVar1 != (RaidClansManager_o *)0x0) {
                    /* try { // try from 030f6a7c to 031f6a7f has its CatchHandler @ 030f6a98 */
                    /* try { // try from 030f6a80 to 031f6a87 has its CatchHandler @ 030f6964 */
                    /* try { // try from 030f6a88 to 031f6a8f has its CatchHandler @ 030f6a94 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f69b8 with catch @ 030f6a90
                       try { // try from 030f6a90 to 031f6abb has its CatchHandler @ 030f6964 */
        RaidClansManager__DEGNMFHGAFB(pEVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6a88 with catch @ 030f6a94
                        */
  FUN_01bab8c8();
}


// ===== private void EPFNDIJOAKH(long PEJIFIIDFMM)  [RVA 0x2FF6A98]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanBaseDialog$$EPFNDIJOAKH @ RVA 0x2FF6A98

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__EPFNDIJOAKH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *__this,int64_t PEJIFIIDFMM,
               MethodInfo *method)

{
  PlayerData_o *__this_00;
  int64_t iVar1;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_c *pNVar2;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6a7c with catch @ 030f6a98
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f69ec with catch @ 030f6a9c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f69fc with catch @ 030f6aa0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6a14 with catch @ 030f6aa4
                        */
  if ((DAT_04565aa4 & 1) == 0) {
                    /* try { // try from 030f6abc to 031f6abf has its CatchHandler @ 030f6acc */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565aa4 = 1;
  }
                    /* catch() { ... } // from try @ 030f6abc with catch @ 030f6acc */
  if ((__this->fields).super.super._BOGAKJOFOEK_k__BackingField != false) {
                    /* try { // try from 030f6ad8 to 031f6ae3 has its CatchHandler @ 030f6af8 */
    return;
  }
                    /* try { // try from 030f6ae4 to 031f6aef has its CatchHandler @ 030f6964 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 030f6af0 to 031f6af7 has its CatchHandler @ 030f6af8 */
    thunk_FUN_01ba7564();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f6ad8 with catch @ 030f6af8
                       catch(type#2 @ 00000000) { ... } // from try @ 030f6af0 with catch @ 030f6af8
                        */
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (PlayerData_o *)0x0) {
    iVar1 = PlayerData__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
    pNVar2 = __this->klass;
    if (iVar1 == PEJIFIIDFMM) {
      (*(pNVar2->vtable)._34_DFGEGIMMCFG.methodPtr)
                (__this,PEJIFIIDFMM,(pNVar2->vtable)._34_DFGEGIMMCFG.method);
                    /* try { // try from 030f6b34 to 031f6bdb has its CatchHandler @ 030f6b34
                       catch() { ... } // from try @ 030f6b34 with catch @ 030f6b34
                       catch() { ... } // from try @ 030f6c58 with catch @ 030f6b34
                       catch() { ... } // from try @ 030f6c9c with catch @ 030f6b34
                       catch() { ... } // from try @ 030f6ce0 with catch @ 030f6b34 */
                    /* WARNING: Could not recover jumptable at 0x030f6b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._20_Close.methodPtr)
                (__this,(__this->klass->vtable)._20_Close.method);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x030f6b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar2->vtable)._35_LPOJCPKJIKF.methodPtr)
              (__this,PEJIFIIDFMM,(pNVar2->vtable)._35_LPOJCPKJIKF.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LCKKFPIKJJH(MGDJPGGPDJI KGCNBJOCNHC)  [RVA 0x2FF6B64]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanBaseDialog$$LCKKFPIKJJH @ RVA 0x2FF6B64

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__LCKKFPIKJJH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *__this,
               MGDJPGGPDJI_o *KGCNBJOCNHC,MethodInfo *method)

{
  if ((DAT_04565aa5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_4375/*"ClanBaseDialog: member is NULL"*/);
    DAT_04565aa5 = 1;
  }
  if ((__this->fields).super.super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if (KGCNBJOCNHC != (MGDJPGGPDJI_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x030f6bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._37_DLOKPLFDEJA.methodPtr)
              (__this,KGCNBJOCNHC,(__this->klass->vtable)._37_DLOKPLFDEJA.method);
    return;
  }
                    /* try { // try from 030f6bdc to 031f6beb has its CatchHandler @ 030f6c9c */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_4375/*"ClanBaseDialog: member is NULL"*/,(MethodInfo *)0x0);
  return;
}


// ===== protected virtual void DNDPMHKMMAB(long PEJIFIIDFMM)  [RVA 0x2FF6C0C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanBaseDialog$$DNDPMHKMMAB @ RVA 0x2FF6C0C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__DNDPMHKMMAB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *__this,int64_t PEJIFIIDFMM,
               MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x2FF6C10]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanBaseDialog$$.ctor @ RVA 0x2FF6C10

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x2FF6C18]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanBaseDialog$$OnDestroy @ RVA 0x2FF6C18

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *__this,MethodInfo *method)

{
  RaidClansManager_o *pEVar1;
  System_Action_long__o *pSVar2;
  System_Action_MGDJPGGPDJI__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 030f6c34 to 031f6c57 has its CatchHandler @ 030f6ca0 */
  if ((DAT_04565aa6 & 1) == 0) {
    FUN_01bab630(&System_Action<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Action<long>_TypeInfo);
                    /* try { // try from 030f6c58 to 031f6c93 has its CatchHandler @ 030f6b34 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_EPFNDIJOAKH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_LCKKFPIKJJH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_OIHOMNDJOMI__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565aa6 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 030f6c94 to 031f6c9b has its CatchHandler @ 030f6ca0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6bdc with catch @ 030f6c9c
                       try { // try from 030f6c9c to 031f6cb7 has its CatchHandler @ 030f6b34 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6c34 with catch @ 030f6ca0
                       catch(type#1 @ 03f99f68) { ... } // from try @ 030f6c94 with catch @ 030f6ca0
                        */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    /* try { // try from 030f6cb8 to 031f6cbb has its CatchHandler @ 030f6cc8 */
  pSVar2 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
                    /* catch() { ... } // from try @ 030f6cb8 with catch @ 030f6cc8 */
                    /* try { // try from 030f6cd4 to 031f6cdf has its CatchHandler @ 030f6cf4 */
  System_Action<long>___ctor();
  if (pEVar1 != (RaidClansManager_o *)0x0) {
                    /* try { // try from 030f6ce0 to 031f6ceb has its CatchHandler @ 030f6b34 */
                    /* try { // try from 030f6cec to 031f6cf3 has its CatchHandler @ 030f6cf4 */
    RaidClansManager__IGNGEHDHCMG(pEVar1,pSVar2,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f6cd4 with catch @ 030f6cf4
                       catch(type#2 @ 00000000) { ... } // from try @ 030f6cec with catch @ 030f6cf4
                        */
                    /* try { // try from 030f6cf8 to 031f6d4f has its CatchHandler @ 030f6cf8
                       catch() { ... } // from try @ 030f6cf8 with catch @ 030f6cf8
                       catch() { ... } // from try @ 030f6e64 with catch @ 030f6cf8
                       catch() { ... } // from try @ 030f6ec0 with catch @ 030f6cf8
                       catch() { ... } // from try @ 030f6ed4 with catch @ 030f6cf8
                       catch() { ... } // from try @ 030f6f38 with catch @ 030f6cf8 */
    pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    pSVar2 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
    System_Action<long>___ctor();
    if (pEVar1 != (RaidClansManager_o *)0x0) {
      RaidClansManager__PMFGHFNAOPK(pEVar1,pSVar2,(MethodInfo *)0x0);
      pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    /* try { // try from 030f6d50 to 031f6d5f has its CatchHandler @ 030f6ee4 */
      CJNHFNHJHPE = (System_Action_MGDJPGGPDJI__o *)
                    thunk_FUN_01bda818(System_Action<MGDJPGGPDJI>_TypeInfo);
      System_Action<object>___ctor();
      if (pEVar1 != (RaidClansManager_o *)0x0) {
        RaidClansManager__BLGMCMLEBDI(pEVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__OnDestroy
                  ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void DLOKPLFDEJA(MGDJPGGPDJI KGCNBJOCNHC)  [RVA 0x2FF6DA0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanBaseDialog$$DLOKPLFDEJA @ RVA 0x2FF6DA0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__DLOKPLFDEJA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *__this,
               MGDJPGGPDJI_o *KGCNBJOCNHC,MethodInfo *method)

{
  return;
}


// ===== protected virtual void CKIGEFAKKDJ(long PEJIFIIDFMM)  [RVA 0x2FF6DA4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanBaseDialog$$CKIGEFAKKDJ @ RVA 0x2FF6DA4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__CKIGEFAKKDJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *__this,int64_t PEJIFIIDFMM,
               MethodInfo *method)

{
  return;
}

