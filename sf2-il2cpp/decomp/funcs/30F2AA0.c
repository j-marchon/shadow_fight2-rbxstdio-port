// GPJEDNEEAFK$$.ctor @ RVA 0x30F2AA0

void GPJEDNEEAFK___ctor(GPJEDNEEAFK_o *__this,MethodInfo *method)

{
  MGNDHCBAPEN_float__string__o *pMVar1;
  MGNDHCBAPEN_float__string__o **ppMVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566436 & 1) == 0) {
    FUN_01bab630(&Method_MGNDHCBAPEN<float,_string>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<float,_string>_TypeInfo);
    DAT_04566436 = 1;
    method = extraout_x1;
  }
  pMVar1 = (MGNDHCBAPEN_float__string__o *)
           thunk_FUN_01bda818(MGNDHCBAPEN<float,_string>_TypeInfo,method);
  MGNDHCBAPEN<float,_object>___ctor
            ((MGNDHCBAPEN_T1__T2__o *)pMVar1,0.0,(Il2CppObject *)0x0,
             Method_MGNDHCBAPEN<float,_string>__ctor__);
  (__this->fields).FPJGEAFCMGA = pMVar1;
  thunk_FUN_01c20e04(&__this->fields,pMVar1);
  pMVar1 = (MGNDHCBAPEN_float__string__o *)thunk_FUN_01bda818(MGNDHCBAPEN<float,_string>_TypeInfo);
  MGNDHCBAPEN<float,_object>___ctor
            ((MGNDHCBAPEN_T1__T2__o *)pMVar1,0.0,(Il2CppObject *)0x0,
             Method_MGNDHCBAPEN<float,_string>__ctor__);
  ppMVar2 = &(__this->fields).LHBGKMGNOEP;
  *ppMVar2 = pMVar1;
                    /* try { // try from 031f2b40 to 032f2bdb has its CatchHandler @ 031f2b40
                       catch() { ... } // from try @ 031f2b40 with catch @ 031f2b40
                       catch() { ... } // from try @ 031f2c08 with catch @ 031f2b40
                       catch() { ... } // from try @ 031f2c74 with catch @ 031f2b40
                       catch() { ... } // from try @ 031f2ca8 with catch @ 031f2b40
                       catch() { ... } // from try @ 031f2cd4 with catch @ 031f2b40
                       catch() { ... } // from try @ 031f2d1c with catch @ 031f2b40
                       catch() { ... } // from try @ 031f2d44 with catch @ 031f2b40
                       catch() { ... } // from try @ 031f2d84 with catch @ 031f2b40 */
  thunk_FUN_01c20e04(ppMVar2,pMVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

