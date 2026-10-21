// PKHLGDMJPMF$$MDHKFFGDOMI @ RVA 0x319BD98

System_String_o * PKHLGDMJPMF__MDHKFFGDOMI(PKHLGDMJPMF_o *__this,MethodInfo *method)

{
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  float local_28;
  float local_24;
  
                    /* try { // try from 0329bda0 to 0339bda3 has its CatchHandler @ 0329bdc4 */
                    /* try { // try from 0329bda4 to 0339bdcb has its CatchHandler @ 0329bc2c */
  if ((DAT_04566aae & 1) == 0) {
                    /* catch() { ... } // from try @ 0329bda0 with catch @ 0329bdc4 */
                    /* try { // try from 0329bdcc to 0339bdd3 has its CatchHandler @ 0329bde8 */
    FUN_01bab630(&float_TypeInfo);
                    /* try { // try from 0329bdd4 to 0339bddf has its CatchHandler @ 0329bc2c */
    FUN_01bab630(&StringLiteral_15634);
                    /* try { // try from 0329bde0 to 0339bde7 has its CatchHandler @ 0329bde8 */
    DAT_04566aae = 1;
  }
  local_24 = (__this->fields).OHHDBINAJCB;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0329bdcc with catch @ 0329bde8
                       catch(type#2 @ 00000000) { ... } // from try @ 0329bde0 with catch @ 0329bde8
                        */
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_24);
  local_28 = (__this->fields).JOLEIODMLFL;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_28);
  pSVar1 = System_String__Format(StringLiteral_15634,arg0,arg1,(MethodInfo *)0x0);
  return pSVar1;
}

