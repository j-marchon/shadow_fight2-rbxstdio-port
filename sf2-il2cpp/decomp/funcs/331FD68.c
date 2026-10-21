// FIBPEPMPJDI$$RandomizeObscuredVars @ RVA 0x331FD68

void FIBPEPMPJDI__RandomizeObscuredVars(FIBPEPMPJDI_o *__this,MethodInfo *method)

{
  System_Action_ILGLOCBJFEG__o **ppSVar1;
  System_Collections_Generic_List_ILGLOCBJFEG__o *__this_00;
  System_Action_ILGLOCBJFEG__o *action;
  
                    /* try { // try from 0341fd7c to 0351fd83 has its CatchHandler @ 0341fde8 */
  if ((DAT_0456783f & 1) == 0) {
                    /* try { // try from 0341fd90 to 0351fd9b has its CatchHandler @ 0341fde0 */
    FUN_01bab630(&System_Action<ILGLOCBJFEG>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ILGLOCBJFEG>_ForEach__);
    FUN_01bab630(&Method_FIBPEPMPJDI_<>c_NBNIOBMFCOB__);
    FUN_01bab630(&FIBPEPMPJDI_<>c_TypeInfo);
                    /* try { // try from 0341fdbc to 0351fdc3 has its CatchHandler @ 0341fe8c */
    DAT_0456783f = 1;
  }
  ILGLOCBJFEG__RandomizeObscuredVars((ILGLOCBJFEG_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).KPFGHBEKJIM;
                    /* try { // try from 0341fdd8 to 0351fddb has its CatchHandler @ 0341fde4 */
                    /* try { // try from 0341fddc to 0351fdf7 has its CatchHandler @ 0341fc90 */
  if ((FIBPEPMPJDI_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0341fd90 with catch @ 0341fde0 */
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 0341fdd8 with catch @ 0341fde4 */
  }
                    /* catch() { ... } // from try @ 0341fd7c with catch @ 0341fde8 */
  action = FIBPEPMPJDI_<>c_TypeInfo->static_fields->__9__6_0;
  if (action == (System_Action_ILGLOCBJFEG__o *)0x0) {
                    /* try { // try from 0341fdf8 to 0351fdfb has its CatchHandler @ 0341fe74 */
    if ((FIBPEPMPJDI_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0341fdfc to 0351fe47 has its CatchHandler @ 0341fc90 */
      thunk_FUN_01ba7564();
    }
    action = (System_Action_ILGLOCBJFEG__o *)thunk_FUN_01bda818(System_Action<ILGLOCBJFEG>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &FIBPEPMPJDI_<>c_TypeInfo->static_fields->__9__6_0;
    *ppSVar1 = action;
                    /* try { // try from 0341fe48 to 0351fe63 has its CatchHandler @ 0341fef4 */
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_ILGLOCBJFEG__o *)0x0) {
                    /* try { // try from 0341fe64 to 0351fe67 has its CatchHandler @ 0341fe88 */
                    /* try { // try from 0341fe68 to 0351fe6f has its CatchHandler @ 0341fe80 */
                    /* try { // try from 0341fe70 to 0351fe9f has its CatchHandler @ 0341fc90 */
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<ILGLOCBJFEG>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0341fdf8 with catch @ 0341fe74 */
  FUN_01bab8c8();
}

