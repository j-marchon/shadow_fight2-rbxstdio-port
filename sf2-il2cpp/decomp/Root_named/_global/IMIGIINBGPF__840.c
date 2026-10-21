// TypeDefIndex 840
// Namespace: 
// public class IMIGIINBGPF : IJIHLBLCJMG
// Fields:

// ===== public void .ctor()  [RVA 0x3082B78]
// IMIGIINBGPF$$.ctor @ RVA 0x3082B78

void IMIGIINBGPF___ctor(IMIGIINBGPF_o *__this,MethodInfo *method)

{
  IJIHLBLCJMG___ctor((IJIHLBLCJMG_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override DBNEAJMCOLB KGGGBHEMAOO()  [RVA 0x3082B80]
// IMIGIINBGPF$$KGGGBHEMAOO @ RVA 0x3082B80

int32_t IMIGIINBGPF__KGGGBHEMAOO(IMIGIINBGPF_o *__this,MethodInfo *method)

{
  return 3;
}


// ===== public override bool JFGBPBOCOIC(BDMDJNOIBKC HJDMBDBJEFL)  [RVA 0x3082B88]
// IMIGIINBGPF$$JFGBPBOCOIC @ RVA 0x3082B88

bool IMIGIINBGPF__JFGBPBOCOIC(IMIGIINBGPF_o *__this,int32_t HJDMBDBJEFL,MethodInfo *method)

{
  return true;
}


// ===== public override void NKLGCNHLBAF()  [RVA 0x3082B90]
// IMIGIINBGPF$$NKLGCNHLBAF @ RVA 0x3082B90

void IMIGIINBGPF__NKLGCNHLBAF(IMIGIINBGPF_o *__this,MethodInfo *method)

{
  int iVar1;
  System_String_o *PMACBPAMPJA;
  Il2CppObject *pIVar2;
  System_TimeSpan_o LLGMFHBMLKB;
  Nekki_Utils_GlobalTimer_o *__this_00;
  PCEDNFLCPPF_o *pPVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566004 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04566004 = 1;
    method = extraout_x1;
  }
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo,method);
  }
  PMACBPAMPJA = BHEDGAKGKPO__GIKEEIFOJCG((MethodInfo *)0x0);
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
  }
  pIVar2 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar2 != (Il2CppObject *)0x0) {
    iVar1 = *(int *)&pIVar2[4].monitor;
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
    }
    LLGMFHBMLKB = System_TimeSpan__FromMilliseconds((double)iVar1,(MethodInfo *)0x0);
    Core_Network_ServerProvider__Init(PMACBPAMPJA,LLGMFHBMLKB,(MethodInfo *)0x0);
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_Utils_GlobalTimer_o *)0x0) {
                    /* try { // try from 03182cb0 to 03282d03 has its CatchHandler @ 03182cb0
                       catch() { ... } // from try @ 03182cb0 with catch @ 03182cb0
                       catch() { ... } // from try @ 03182d30 with catch @ 03182cb0
                       catch() { ... } // from try @ 03182d88 with catch @ 03182cb0
                       catch() { ... } // from try @ 03182dcc with catch @ 03182cb0 */
      Nekki_Utils_GlobalTimer__ServerTimeSync
                (__this_00,(System_Action_o *)0x0,(System_Action_o *)0x0,(MethodInfo *)0x0);
      pPVar3 = PCEDNFLCPPF__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pPVar3 != (PCEDNFLCPPF_o *)0x0) {
        PCEDNFLCPPF__HHIAAAPBJBL(pPVar3,(MethodInfo *)0x0);
        pPVar3 = PCEDNFLCPPF__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pPVar3 != (PCEDNFLCPPF_o *)0x0) {
          PCEDNFLCPPF__JMKAINOCIJF(pPVar3,(MethodInfo *)0x0);
          IJIHLBLCJMG__FGNINNOOCCL((IJIHLBLCJMG_o *)__this,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

