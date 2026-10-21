// HOOAAGABMBL$$BBEPHPFNCKG @ RVA 0x30F112C

void HOOAAGABMBL__BBEPHPFNCKG(HOOAAGABMBL_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = System_String__IsNullOrEmpty
                    ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,(MethodInfo *)0x0);
  if (!bVar1) {
    (__this->fields)._GMPAEDFIIHF_k__BackingField =
         (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField;
    thunk_FUN_01c20e04();
  }
  bVar1 = System_String__IsNullOrEmpty
                    ((IKKAMAMLIKA->fields)._DKODBGOHKGH_k__BackingField,(MethodInfo *)0x0);
  if (!bVar1) {
    (__this->fields)._DKODBGOHKGH_k__BackingField =
         (IKKAMAMLIKA->fields)._DKODBGOHKGH_k__BackingField;
    thunk_FUN_01c20e04();
  }
                    /* try { // try from 031f1184 to 032f121f has its CatchHandler @ 031f1184
                       catch() { ... } // from try @ 031f1184 with catch @ 031f1184
                       catch() { ... } // from try @ 031f124c with catch @ 031f1184
                       catch() { ... } // from try @ 031f12b8 with catch @ 031f1184
                       catch() { ... } // from try @ 031f12ec with catch @ 031f1184
                       catch() { ... } // from try @ 031f1318 with catch @ 031f1184
                       catch() { ... } // from try @ 031f1360 with catch @ 031f1184
                       catch() { ... } // from try @ 031f1388 with catch @ 031f1184
                       catch() { ... } // from try @ 031f13c8 with catch @ 031f1184 */
  bVar1 = System_String__IsNullOrEmpty
                    ((IKKAMAMLIKA->fields)._IJGEAGDGNBK_k__BackingField,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  ppSVar2 = &(__this->fields)._IJGEAGDGNBK_k__BackingField;
  *ppSVar2 = (IKKAMAMLIKA->fields)._IJGEAGDGNBK_k__BackingField;
  thunk_FUN_01c20e04(ppSVar2);
  return;
}

