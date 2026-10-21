// TypeDefIndex 743
// Namespace: 
// [CompilerGenerated]
// private sealed class EGMONPGHHDP.DGJPDKNGGAJ
// Fields:
//   public EGMONPGHHDP <>4__this; // 0x10
//   public Action<BKKPAKHJDKB> callback; // 0x18

// ===== internal bool CCKCKNLJALI(HOOAAGABMBL x)  [RVA 0x304CA28]
// EGMONPGHHDP.DGJPDKNGGAJ$$CCKCKNLJALI @ RVA 0x304CA28

bool EGMONPGHHDP_DGJPDKNGGAJ__CCKCKNLJALI
               (EGMONPGHHDP_DGJPDKNGGAJ_o *__this,HOOAAGABMBL_o *x,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  EGMONPGHHDP_o *pEVar2;
  RaidConfig_JMEJFGKJNEA_o *pJVar3;
  
                    /* try { // try from 0314ca28 to 0324ca2f has its CatchHandler @ 0314ca30 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314c9b8 with catch @ 0314ca30
                       catch(type#2 @ 00000000) { ... } // from try @ 0314ca00 with catch @ 0314ca30
                       catch(type#2 @ 00000000) { ... } // from try @ 0314ca28 with catch @ 0314ca30
                        */
  if ((x != (HOOAAGABMBL_o *)0x0) &&
     (pEVar2 = (__this->fields).__4__this, pEVar2 != (EGMONPGHHDP_o *)0x0)) {
    pJVar3 = (pEVar2->fields)._BJALAALAIDH_k__BackingField;
    if (pJVar3 == (RaidConfig_JMEJFGKJNEA_o *)0x0) {
      b = (System_String_o *)0x0;
    }
    else {
      b = (pJVar3->fields).COENDIKFHPA;
    }
    bVar1 = System_String__op_Equality((x->fields)._COIPKAKHDFP_k__BackingField,b,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void FGINCGKHBFE(BKKPAKHJDKB t)  [RVA 0x304CA60]
// EGMONPGHHDP.DGJPDKNGGAJ$$FGINCGKHBFE @ RVA 0x304CA60

void EGMONPGHHDP_DGJPDKNGGAJ__FGINCGKHBFE
               (EGMONPGHHDP_DGJPDKNGGAJ_o *__this,BKKPAKHJDKB_o *t,MethodInfo *method)

{
  MethodInfo *in_x3;
  EGMONPGHHDP_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    EGMONPGHHDP__OAIHLHCKNOO(__this_00,t,(__this->fields).callback,in_x3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x304BAF8]
// EGMONPGHHDP.DGJPDKNGGAJ$$.ctor @ RVA 0x304BAF8

void EGMONPGHHDP_DGJPDKNGGAJ___ctor(EGMONPGHHDP_DGJPDKNGGAJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

