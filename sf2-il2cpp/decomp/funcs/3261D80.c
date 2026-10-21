// BDGDJDGHMJI$$MKNJLMOFDHM @ RVA 0x3261D80

void BDGDJDGHMJI__MKNJLMOFDHM(System_String_o *KGLJICLJHEL,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  OMFJHNMDIBF_o *__this;
  PIADCKMDDAK_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *CELOLGNMKCG;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  PIADCKMDDAK_o **ppPVar1;
  
  if ((DAT_045671b4 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5449);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5450);
    FUN_01bab630(&Method_BDGDJDGHMJI_EMIEFDFIEMD__);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045671b4 = 1;
  }
  __this = (OMFJHNMDIBF_o *)thunk_FUN_01bda818(OMFJHNMDIBF_TypeInfo);
  OMFJHNMDIBF___ctor(__this,(MethodInfo *)0x0);
  __this_00 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
  PIADCKMDDAK___ctor(__this_00,(MethodInfo *)0x0);
  if (__this != (OMFJHNMDIBF_o *)0x0) {
    ppPVar1 = &(__this->fields).IEDLACLJJOK;
    *ppPVar1 = __this_00;
    thunk_FUN_01c20e04(ppPVar1,__this_00);
    if (*ppPVar1 != (PIADCKMDDAK_o *)0x0) {
      PIADCKMDDAK__HCOCAAIGNNL(*ppPVar1,KGLJICLJHEL,(MethodInfo *)0x0);
      if (*ppPVar1 != (PIADCKMDDAK_o *)0x0) {
        ((*ppPVar1)->fields).GDKPGIBMFPA = CJNHFNHJHPE;
        __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)MOPNMEHIMFJ,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5449,
                   (MethodInfo *)0x0);
        LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)LFINFBNOLFG,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5450,
                   (MethodInfo *)0x0);
        CELOLGNMKCG = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
        BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this_01,CELOLGNMKCG,(Google_Protobuf_IMessage_o *)__this,
                     BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

