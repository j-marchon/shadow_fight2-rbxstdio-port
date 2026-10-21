// KIOBDEIAMOO$$GAJBEIKKCHH @ RVA 0x30980B4

void KIOBDEIAMOO__GAJBEIKKCHH
               (KIOBDEIAMOO_o *__this,Unity_Services_LevelPlay_LevelPlayInitError_o *BAPELFMECBI,
               MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  Il2CppObject *arg0;
  int32_t local_34;
  
  if ((DAT_045660f1 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6677);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6678);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    DAT_045660f1 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6677,(MethodInfo *)0x0);
                    /* try { // try from 0319814c to 0329859f has its CatchHandler @ 0319814c
                       catch() { ... } // from try @ 0319814c with catch @ 0319814c
                       catch() { ... } // from try @ 031986c8 with catch @ 0319814c
                       catch() { ... } // from try @ 03198aac with catch @ 0319814c
                       catch() { ... } // from try @ 03198cf8 with catch @ 0319814c
                       catch() { ... } // from try @ 03198d0c with catch @ 0319814c
                       catch() { ... } // from try @ 03198d1c with catch @ 0319814c
                       catch() { ... } // from try @ 03198e48 with catch @ 0319814c
                       catch() { ... } // from try @ 03198ed8 with catch @ 0319814c */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6678,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if (BAPELFMECBI != (Unity_Services_LevelPlay_LevelPlayInitError_o *)0x0) {
    local_34 = (BAPELFMECBI->fields)._ErrorCode_k__BackingField;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
    pSVar1 = System_String__Format
                       (pSVar1,arg0,
                        (Il2CppObject *)(BAPELFMECBI->fields)._ErrorMessage_k__BackingField,
                        (MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

