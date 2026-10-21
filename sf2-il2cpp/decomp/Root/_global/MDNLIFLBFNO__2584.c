// TypeDefIndex 2584
// Namespace: 
// public class MDNLIFLBFNO : Dictionary<string, object>
// Fields:

// ===== public void .ctor()  [RVA 0x33A3558]
// MDNLIFLBFNO$$.ctor @ RVA 0x33A3558

void MDNLIFLBFNO___ctor(MDNLIFLBFNO_o *__this,MethodInfo *method)

{
                    /* try { // try from 034a3560 to 035a3563 has its CatchHandler @ 034a35e8 */
  if ((DAT_04567cd0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
    DAT_04567cd0 = 1;
  }
  System_Collections_Generic_Dictionary<object,_object>___ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
  return;
}

