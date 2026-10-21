// PKHLGDMJPMF$$ToString @ RVA 0x319BCF8

System_String_o * PKHLGDMJPMF__ToString(PKHLGDMJPMF_o *__this,MethodInfo *method)

{
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  float local_28;
  float local_24;
  
                    /* try { // try from 0329bd14 to 0339bd3f has its CatchHandler @ 0329bd84 */
  if ((DAT_04566aad & 1) == 0) {
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_15562);
                    /* try { // try from 0329bd40 to 0339bd6f has its CatchHandler @ 0329bc2c */
    DAT_04566aad = 1;
  }
  local_24 = (__this->fields).OHHDBINAJCB;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_24);
  local_28 = (__this->fields).JOLEIODMLFL;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_28);
                    /* try { // try from 0329bd70 to 0339bd77 has its CatchHandler @ 0329bd7c */
                    /* try { // try from 0329bd78 to 0339bd9f has its CatchHandler @ 0329bc2c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0329bd70 with catch @ 0329bd7c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0329bcd0 with catch @ 0329bd80
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0329bd14 with catch @ 0329bd84
                        */
  pSVar1 = System_String__Format(StringLiteral_15562,arg0,arg1,(MethodInfo *)0x0);
  return pSVar1;
}

