// NLDPAHFABGL$$Equals @ RVA 0x3570538

bool NLDPAHFABGL__Equals(NLDPAHFABGL_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 0367053c to 03770543 has its CatchHandler @ 03672fa4 */
  if ((DAT_04568c5f & 1) == 0) {
                    /* try { // try from 03670554 to 0377055b has its CatchHandler @ 03672fa0 */
                    /* try { // try from 0367055c to 0377056b has its CatchHandler @ 03672f9c */
    FUN_01bab630(&NLDPAHFABGL_TypeInfo);
    DAT_04568c5f = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else {
                    /* try { // try from 0367057c to 03770583 has its CatchHandler @ 03672f98 */
    if (IBKIPBJJCPG->klass != (Il2CppClass *)NLDPAHFABGL_TypeInfo) {
      IBKIPBJJCPG = (Il2CppObject *)0x0;
    }
  }
                    /* try { // try from 03670594 to 0377059b has its CatchHandler @ 03672f94 */
  bVar1 = NLDPAHFABGL__Equals(__this,(NLDPAHFABGL_o *)IBKIPBJJCPG,method);
  return bVar1;
}

