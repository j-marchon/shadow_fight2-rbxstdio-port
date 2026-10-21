// IFAMAAGNCBJ$$.cctor @ RVA 0x3474504

void IFAMAAGNCBJ___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_Type__object__o **ppSVar1;
  
                    /* catch() { ... } // from try @ 03573f44 with catch @ 03574504 */
                    /* catch() { ... } // from try @ 03573f28 with catch @ 03574508 */
                    /* catch() { ... } // from try @ 03573f10 with catch @ 0357450c */
                    /* catch() { ... } // from try @ 03573eec with catch @ 03574510 */
                    /* catch() { ... } // from try @ 03574414 with catch @ 03574514 */
                    /* catch() { ... } // from try @ 03574410 with catch @ 03574518 */
                    /* catch() { ... } // from try @ 03573efc with catch @ 0357451c */
                    /* catch() { ... } // from try @ 03573ed8 with catch @ 03574520 */
                    /* catch() { ... } // from try @ 03574428 with catch @ 03574524
                       catch() { ... } // from try @ 03574430 with catch @ 03574524 */
                    /* catch() { ... } // from try @ 0357411c with catch @ 03574528 */
                    /* catch() { ... } // from try @ 03574008 with catch @ 0357452c */
                    /* catch() { ... } // from try @ 035740e4 with catch @ 03574530 */
  if ((DAT_04568315 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Type,_object>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<Type,_object>_TypeInfo);
                    /* try { // try from 0357454c to 0367454f has its CatchHandler @ 035745f8 */
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_04568315 = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<Type,_object>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<Type,_object>__ctor__);
  ppSVar1 = &IFAMAAGNCBJ_TypeInfo->static_fields->ELLLKJAIDHE;
  *ppSVar1 = (System_Collections_Generic_Dictionary_Type__object__o *)__this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  return;
}

