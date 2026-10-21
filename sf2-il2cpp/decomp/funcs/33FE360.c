// MGNPHCAAEIO$$FHKMIFJBPEN @ RVA 0x33FE360

System_Collections_Generic_List_HOOAAGABMBL__o *
MGNPHCAAEIO__FHKMIFJBPEN
          (System_Collections_Generic_List_HOOAAGABMBL__o *EDPNABCKENA,MethodInfo *method)

{
  System_Collections_Generic_List_HOOAAGABMBL__o *HPACPFLKHPK;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568026 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
                    /* try { // try from 034fe3ac to 035fe3b3 has its CatchHandler @ 034fe6fc */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 034fe3bc to 035fe3c3 has its CatchHandler @ 034fe724 */
    DAT_04568026 = 1;
    method = extraout_x1;
  }
  HPACPFLKHPK = (System_Collections_Generic_List_HOOAAGABMBL__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo,method);
                    /* try { // try from 034fe3c8 to 035fe3d3 has its CatchHandler @ 034fe70c */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
                    /* try { // try from 034fe3d4 to 035fe3df has its CatchHandler @ 034fe704 */
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO__FHKMIFJBPEN(EDPNABCKENA,HPACPFLKHPK,in_x2);
                    /* try { // try from 034fe3f0 to 035fe3f7 has its CatchHandler @ 034fe714 */
                    /* try { // try from 034fe400 to 035fe407 has its CatchHandler @ 034fe720 */
  return HPACPFLKHPK;
}

