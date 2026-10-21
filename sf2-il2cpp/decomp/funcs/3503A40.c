// PNEKMHMACLG$$.ctor @ RVA 0x3503A40

void PNEKMHMACLG___ctor(PNEKMHMACLG_o *__this,int32_t ACCIHBHMFPN,System_Xml_XmlNode_o *AHDGNOJPPIB,
                       MethodInfo *method)

{
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_Collections_Generic_List_AJNNHGGLGIF__o **ppSVar1;
  
                    /* try { // try from 03603a4c to 03703a4f has its CatchHandler @ 03603aec */
                    /* try { // try from 03603a58 to 03703a73 has its CatchHandler @ 03603af0 */
  if ((DAT_0456887a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
                    /* try { // try from 03603a90 to 03703a97 has its CatchHandler @ 03603af4 */
    DAT_0456887a = 1;
  }
                    /* try { // try from 03603a98 to 03703adb has its CatchHandler @ 036038f8 */
  __this_00 = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
  ppSVar1 = &(__this->fields).LJNCACBBIBD;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  AJNNHGGLGIF___ctor((AJNNHGGLGIF_o *)__this,ACCIHBHMFPN,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* try { // try from 03603adc to 03703adf has its CatchHandler @ 03603b04 */
                    /* try { // try from 03603ae0 to 03703ae3 has its CatchHandler @ 03603afc */
                    /* try { // try from 03603ae4 to 03703ae7 has its CatchHandler @ 03603af8 */
                    /* try { // try from 03603ae8 to 03703b1f has its CatchHandler @ 036038f8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603a4c with catch @ 03603aec
                        */
                    /* WARNING: Could not recover jumptable at 0x03603af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603a58 with catch @ 03603af0
                        */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}

