// KPLJFEEMAOH.GCJCGBFLHEE$$EMLHAINFJCL @ RVA 0x347E19C

void KPLJFEEMAOH_GCJCGBFLHEE__EMLHAINFJCL(KPLJFEEMAOH_GCJCGBFLHEE_o *__this,MethodInfo *method)

{
  System_Action_IEnumerable_string___bool__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  KPLJFEEMAOH_o *pKVar1;
  GEJEGHKMPJM_o *__this_00;
  
                    /* try { // try from 0357e19c to 0367e1a3 has its CatchHandler @ 0357e1a4 */
                    /* catch() { ... } // from try @ 0357e168 with catch @ 0357e1a4
                       catch() { ... } // from try @ 0357e19c with catch @ 0357e1a4 */
  if ((DAT_0456836e & 1) == 0) {
    FUN_01bab630(&System_Action<IEnumerable<string>,_bool>_TypeInfo);
    FUN_01bab630(&Method_KPLJFEEMAOH_GCJCGBFLHEE_MOGKIIFFLCH__);
    DAT_0456836e = 1;
    method = extraout_x1;
  }
  pKVar1 = (__this->fields).__4__this;
  if (pKVar1 != (KPLJFEEMAOH_o *)0x0) {
    __this_00 = (pKVar1->fields).PEEHIKFEJAJ;
    CJNHFNHJHPE = (System_Action_IEnumerable_string___bool__o *)
                  thunk_FUN_01bda818(System_Action<IEnumerable<string>,_bool>_TypeInfo,method);
    System_Action<object,_bool>___ctor();
    if (__this_00 != (GEJEGHKMPJM_o *)0x0) {
      GEJEGHKMPJM__MDLGDNPLOHL(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

