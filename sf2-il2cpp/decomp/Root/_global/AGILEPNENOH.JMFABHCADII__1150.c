// TypeDefIndex 1150
// Namespace: 
// [CompilerGenerated]
// private sealed class AGILEPNENOH.JMFABHCADII
// Fields:
//   public long value; // 0x10
//   public Action<AFFHKININGD> <>9__1; // 0x18

// ===== public void .ctor()  [RVA 0x30FF030]
// AGILEPNENOH.JMFABHCADII$$.ctor @ RVA 0x30FF030

void AGILEPNENOH_JMFABHCADII___ctor(AGILEPNENOH_JMFABHCADII_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void ADKAPHALAMC(AGILEPNENOH x)  [RVA 0x30FF508]
// AGILEPNENOH.JMFABHCADII$$ADKAPHALAMC @ RVA 0x30FF508

void AGILEPNENOH_JMFABHCADII__ADKAPHALAMC
               (AGILEPNENOH_JMFABHCADII_o *__this,AGILEPNENOH_o *x,MethodInfo *method)

{
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  System_Action_AFFHKININGD__o *action;
  System_Action_AFFHKININGD__o **ppSVar1;
  
                    /* try { // try from 031ff514 to 032ff53f has its CatchHandler @ 031ffb9c */
  if ((DAT_045664b7 & 1) == 0) {
    FUN_01bab630(&System_Action<AFFHKININGD>_TypeInfo);
    FUN_01bab630(&Method_AGILEPNENOH_JMFABHCADII_GDCKOAMPKCN__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_ForEach__);
    DAT_045664b7 = 1;
  }
  if (x != (AGILEPNENOH_o *)0x0) {
    __this_00 = (x->fields).super.HDDNEKLMLMF;
    ppSVar1 = &(__this->fields).__9__1;
    action = *ppSVar1;
    if (action == (System_Action_AFFHKININGD__o *)0x0) {
      action = (System_Action_AFFHKININGD__o *)
               thunk_FUN_01bda818(System_Action<AFFHKININGD>_TypeInfo);
                    /* try { // try from 031ff57c to 032ff583 has its CatchHandler @ 031ffb8c */
                    /* try { // try from 031ff588 to 032ff58f has its CatchHandler @ 031ffb7c */
      System_Action<object>___ctor();
      (__this->fields).__9__1 = action;
      thunk_FUN_01c20e04(ppSVar1,action);
    }
    if (__this_00 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<AFFHKININGD>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void GDCKOAMPKCN(AFFHKININGD y)  [RVA 0x30FF5D0]
// AGILEPNENOH.JMFABHCADII$$GDCKOAMPKCN @ RVA 0x30FF5D0

void AGILEPNENOH_JMFABHCADII__GDCKOAMPKCN
               (AGILEPNENOH_JMFABHCADII_o *__this,AFFHKININGD_o *y,MethodInfo *method)

{
  if (y != (AFFHKININGD_o *)0x0) {
                    /* try { // try from 031ff5e4 to 032ff5ef has its CatchHandler @ 031ffb34 */
    AFFHKININGD__CDEMANBJMGK(y,(__this->fields).value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

