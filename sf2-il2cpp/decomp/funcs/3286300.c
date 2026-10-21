// OOMHDDBCBJP$$FNGDEJNOBPK @ RVA 0x3286300

System_String_o * OOMHDDBCBJP__FNGDEJNOBPK(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
                    /* try { // try from 03386308 to 0348630b has its CatchHandler @ 03386804 */
                    /* try { // try from 03386314 to 03486337 has its CatchHandler @ 0338680c */
  if ((DAT_045672b6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_20275);
    DAT_045672b6 = 1;
  }
  pSVar1 = System_String__Concat(StringLiteral_20275,(__this->fields).APBICPEOMOM,(MethodInfo *)0x0)
  ;
  return pSVar1;
}

