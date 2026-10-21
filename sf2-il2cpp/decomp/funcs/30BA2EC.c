// Nekki.SF2.GUI.TextPic.OFKFGMDCIJP$$ToString @ RVA 0x30BA2EC

System_String_o *
Nekki_SF2_GUI_TextPic_OFKFGMDCIJP__ToString
          (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *__this,MethodInfo *method)

{
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  System_String_o *pSVar1;
  int local_3c;
  int32_t local_38;
  int32_t local_34;
  
                    /* try { // try from 031ba2f8 to 032ba2fb has its CatchHandler @ 031ba314 */
                    /* try { // try from 031ba2fc to 032ba32b has its CatchHandler @ 031ba08c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ba224 with catch @ 031ba300
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ba2b8 with catch @ 031ba304
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ba294 with catch @ 031ba308
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ba280 with catch @ 031ba30c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ba260 with catch @ 031ba310
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ba2f8 with catch @ 031ba314
                        */
  if ((DAT_0456622c & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 031ba32c to 032ba343 has its CatchHandler @ 031ba3e4 */
    FUN_01bab630(&StringLiteral_15545);
    DAT_0456622c = 1;
  }
  local_34 = (__this->fields)._LKDPNJEBNFO_k__BackingField;
                    /* try { // try from 031ba344 to 032ba3c7 has its CatchHandler @ 031ba08c */
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  local_38 = (__this->fields)._BNEEPBICADN_k__BackingField;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
  local_3c = ((__this->fields)._BNEEPBICADN_k__BackingField -
             (__this->fields)._LKDPNJEBNFO_k__BackingField) + 1;
  arg2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_3c);
  pSVar1 = System_String__Format(StringLiteral_15545,arg0,arg1,arg2,(MethodInfo *)0x0);
  return pSVar1;
}

