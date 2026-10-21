// KDPDBGNOFEN$$NEDONAJNFHE @ RVA 0x34AF358

KEFHDOHHHML_o *
KDPDBGNOFEN__NEDONAJNFHE
          (KDPDBGNOFEN_o *__this,int32_t CEOLOKFCKIG,System_String_o *NONPLOOOOAG,MethodInfo *method
          )

{
  System_String_o *KGLJICLJHEL;
  KEFHDOHHHML_o *__this_00;
  System_Enum_o local_48;
  undefined4 local_38;
  
                    /* try { // try from 035af37c to 036af44f has its CatchHandler @ 035af37c
                       catch() { ... } // from try @ 035af37c with catch @ 035af37c
                       catch() { ... } // from try @ 035af4a4 with catch @ 035af37c
                       catch() { ... } // from try @ 035af4d0 with catch @ 035af37c
                       catch() { ... } // from try @ 035af4f4 with catch @ 035af37c
                       catch() { ... } // from try @ 035af528 with catch @ 035af37c */
  if ((DAT_0456855a & 1) == 0) {
    FUN_01bab630(&KEFHDOHHHML_TypeInfo);
    FUN_01bab630(&PEDENGEGDNI_TypeInfo);
    DAT_0456855a = 1;
  }
  local_48.klass = (System_Enum_c *)PEDENGEGDNI_TypeInfo;
  local_48.monitor = (void *)0xffffffffffffffff;
  local_38 = 6;
  KGLJICLJHEL = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  __this_00 = (KEFHDOHHHML_o *)thunk_FUN_01bda818(KEFHDOHHHML_TypeInfo);
  KEFHDOHHHML___ctor(__this_00,KGLJICLJHEL,(Google_Protobuf_IMessage_o *)0x0,CEOLOKFCKIG,NONPLOOOOAG
                     ,-1,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  return __this_00;
}

