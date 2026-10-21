// TypeDefIndex 1407
// Namespace: 
// public class OHAPMMPNLCB : JJJLCNBODNF
// Fields:

// ===== public void BFCHNADJHFA(string CJFAPGEEPLM, IList<string> DLKPNGAHJMN, Action BLMFLPJJMPF)  [RVA 0x317BE20]
// OHAPMMPNLCB$$BFCHNADJHFA @ RVA 0x317BE20

void OHAPMMPNLCB__BFCHNADJHFA
               (OHAPMMPNLCB_o *__this,System_String_o *CJFAPGEEPLM,
               System_Collections_Generic_IList_string__o *DLKPNGAHJMN,System_Action_o *BLMFLPJJMPF,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Action_o *BLMFLPJJMPF_00;
  GOLIJCLCCBA_o *__this_01;
  
  if ((DAT_0456698d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_OHAPMMPNLCB_CKOMAHDDOIO_DLACDDDGGAD__);
    FUN_01bab630(&OHAPMMPNLCB_CKOMAHDDOIO_TypeInfo);
    FUN_01bab630(&GOLIJCLCCBA_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456698d = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(OHAPMMPNLCB_CKOMAHDDOIO_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].monitor = BLMFLPJJMPF;
    thunk_FUN_01c20e04(&__this_00[1].monitor,BLMFLPJJMPF);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = MGNPHCAAEIO__AKJNJNFHHOD((MethodInfo *)0x0);
    *(bool *)&__this_00[1].klass = bVar1;
    if (bVar1) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__MHNCGDFKIJN((MethodInfo *)0x0);
    }
    BLMFLPJJMPF_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    __this_01 = (GOLIJCLCCBA_o *)thunk_FUN_01bda818(GOLIJCLCCBA_TypeInfo);
    GOLIJCLCCBA___ctor(__this_01,CJFAPGEEPLM,BLMFLPJJMPF_00,DLKPNGAHJMN,true,(MethodInfo *)0x0);
    JJPNLEPEAFM__ONJPOCDFDGK(__this_01,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x317BF80]
// OHAPMMPNLCB$$.ctor @ RVA 0x317BF80

void OHAPMMPNLCB___ctor(OHAPMMPNLCB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

